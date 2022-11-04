////////////////////////////////////////////////////////////////////////
//
// File           : p2-support.h
// Description    : Headers of general-purpose utility functions
//					          we use for the 257 project #1
// Author		  : Masrik Dahir
// Date			  : 11/05/2021
// Notes		  :
////////////////////////////////////////////////////////////////////////

#define MAILBOX_SIZE 2000
#define ADDRESS_SIZE 50
#define SUBJECT_SIZE 200
#define BODY_SIZE 2000
#define NAME_SIZE 20
//CHANGE the email below to your vcu email
#define user_email "#"
//add other define Macros as needed

struct Email
{
    char sender[ADDRESS_SIZE];
    char receiver[ADDRESS_SIZE];
    char subject[SUBJECT_SIZE];
    char body[BODY_SIZE];
    int ID;

    //add other struct members as needed
    //consider adding a nested struct here
    struct sent_date{
        int month;
        int day;
        int year;
    }sent_date;
};



struct Mailbox
{
    int size;
    //add other struct members as needed
    struct Email *emails;
};


// This is a sample comment for the initialize function
// You should include a similar comment for each function declared within the .h file
/////////////////////////////////////////////////////////////////////////////////////
// Function     : initialize
// Description  : Initializes the database for CMSC257 project #2 by manually entering // the records using create_email function
// Inputs       : struct Mailbox* - pointer to the database
// Outputs      : void
/////////////////////////////////////////////////////////////////////////////////////
// Add comments for each function below in the following format
/////////////////////////////////////////////////////////////////////////////////////
// Function     : create_email
// Description  : create email for the initialize functions
// Inputs       : char pointer to sender, char pointer to receiver, char pointer to subject, char pointer to body, int month,
//                  int day, int year, and struct Mailbox pointer to the database
// Outputs      : void
/////////////////////////////////////////////////////////////////////////////////////

// This function initialize the mailbox (create emails) with manually entered mails
void initialize (struct Mailbox *ib);

//add other function declarations as needed
// This function create emails for the mailbox database (initialize functions)
void create_email(char* sender, char* receiver, char* subject, char* body, int month, int day, int year, struct Mailbox *ib);
