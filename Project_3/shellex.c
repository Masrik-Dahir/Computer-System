/* $begin shellmain */
#include "csapp.h"
#include <unistd.h>
#define MAXARGS 128
#define PATH_MAXI 200
/* Function prototypes */

void eval(char *cmdline);                                   //eval header
int parseline(char *buf, char **argv);                      //parseline header
int builtin_command(char **argv);                           //built in command header
int cwd();                                                  //cwd function header                               //signit handler header

int main(int argc, char *argv[])
{
     if(signal(SIGINT, SIG_IGN) == SIG_ERR){
            unix_error("signal error");
        }
    char cmdline[MAXLINE]; /* Command line */

    while (1)
    {
        /* Read */
        if (argc > 1)
        {
            if (strstr(argv[1], "-p") != NULL)              //searches the input for the str -p and if it finds something it prints
                printf("%s>", argv[2]);
        }
        else                                                //default set to my257sh
        {
            printf("257sh> ");
        }
        Fgets(cmdline, MAXLINE, stdin);
        if (feof(stdin))
            exit(0);

        /* Evaluate */
        eval(cmdline);
    }
}
/* $end shellmain */
/* $begin eval */
/* eval - Evaluate a command line */
void eval(char *cmdline)
{
    char *argv[MAXARGS]; /* Argument list execve() */
    char buf[MAXLINE];   /* Holds modified command line */
    int bg;              /* Should the job run in bg or fg? */
    pid_t pid;           /* Process id */

    strcpy(buf, cmdline);
    bg = parseline(buf, argv);
    if (argv[0] == NULL)
        return; /* Ignore empty lines */

    if (!builtin_command(argv))
    {
        if ((pid = Fork()) == 0)
        { /* Child runs user job */                 //parent and child diverge
            if (execvp(argv[0], argv) < 0)
            {
                printf("%s\n","Execution failed (in fork)");
                printf("%s: Command not found.\n", argv[0]);
                exit(1);
            }
        }

        /* Parent waits for foreground job to terminate */
        if (!bg)
        {
            int status;
            if (waitpid(pid, &status, 0) < 0){
                unix_error("waitfg: waitpid error");
            }
            else{
                int es = WEXITSTATUS(status);
                printf("Child exit status: %d\n", es);
            }
        }
        else
            printf("%d %s", pid, cmdline);
    }
    return;
}

/* If first arg is a builtin command, run it and return true */
int builtin_command(char **argv)
{
    if (!strcmp(argv[0], "exit")) /* quit command */
        raise(SIGTERM);

    if (!strcmp(argv[0], "&")) /* Ignore singleton & */
        return 1;

    if (!strcmp(argv[0], "pid"))    // pid command//
    {
        printf("%d\n", getpid());   //uses get pid 
        return 1;
    }
    if (!strcmp(argv[0], "ppid"))   //ppid command
    {
        printf("%d\n", getppid());  //uses get ppid
        return 1;
    }
    if (!strcmp(argv[0], "help"))   //help command prints helpful guide.
    {
        printf("Developer name is Masrik Dahir\n");
        printf("You can change the shell prompt by first calling the executable 257sh then typing -p prompt.\nThis will set the commond prompt to whatever you inputted as prompt.\n");
        printf("The built-in commands are exit to exit.\npid to print process id. ppid to print parent process id\ncd and cd <path> to print to and change current working directory\n");
        printf("Please use the man pages to get help if you are looking for non-built in commands\n");
        return 1;
    };
    if (!strcmp(argv[0], "cd")) //cwd command
    {
        char cwd[PATH_MAXI];
        if(argv[1] != NULL){
            int j = chdir(argv[1]);
            if(j == 0){
             return 1;
            }
            else {
                printf("Change directory failed\n");
            }
        return 1;
        }
        else{
            if (getcwd(cwd, sizeof(cwd)) != NULL)  //takes cwd and its size and puts it into an array and pritns if its not null
            {
                printf("Current working dir: %s\n", cwd);
                return 1;
            }
            else //otherwise print error message
            {
                printf("Path not recognizable");
                return 1;
            };
        } 
    }
    
    return 0; /* Not a builtin command */
}
/* $end eval */

/* $begin parseline */
/* parseline - Parse the command line and build the argv array */
int parseline(char *buf, char **argv)
{
    char *delim; /* Points to first space delimiter */
    int argc;    /* Number of args */
    int bg;      /* Background job? */

    buf[strlen(buf) - 1] = ' ';   /* Replace trailing '\n' with space */
    while (*buf && (*buf == ' ')) /* Ignore leading spaces */
        buf++;

    /* Build the argv list */
    argc = 0;
    while ((delim = strchr(buf, ' ')))
    {
        argv[argc++] = buf;
        *delim = '\0';
        buf = delim + 1;
        while (*buf && (*buf == ' ')) /* Ignore spaces */
            buf++;
    }
    argv[argc] = NULL;

    if (argc == 0) /* Ignore blank line */
        return 1;

    /* Should the job run in the background? */
    if ((bg = (*argv[argc - 1] == '&')) != 0)
        argv[--argc] = NULL;

    return bg;
}
/* $end parseline */
//begin sigint_handler//
