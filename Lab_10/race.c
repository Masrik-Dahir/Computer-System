/* 
 * race.c - demonstrates a race condition
 */
/* $begin race */
/* WARNING: This code is buggy! */
#include "csapp.h"
#define N 4

void *thread(void *vargp);

int main() 
{
    pthread_t tid[N];
    int* igloo = (int* ) malloc(5*sizeof( int));
    int i;
    for (i = 0; i < N; i++){                        //line:conc:race:incri
     	igloo[i] = i; 
         Pthread_create(&tid[i], NULL, thread, igloo + i); //line:conc:race:createthread
    }
    for (i = 0; i < N; i++) 
    	Pthread_join(tid[i], NULL);
    free(igloo);
    exit(0);
}

/* Thread routine */
void *thread(void *vargp) 
{
    Sleep(1);
    int myid = *((int *)vargp);  //line:conc:race:derefarg
    printf("Hello from thread %d\n", myid);
    return NULL;
}
/* $end race */
