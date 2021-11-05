//
// Created by Masrik Ahmed Dahir on 11/3/21.
//

#define MAILBOX_SIZE 2000
#define ADDRESS_SIZE 50
#define SUBJECT_SIZE 200
#define BODY_SIZE 2000
#define NAME_SIZE 20
//CHANGE the email below to your vcu email
#define user_email "dahirma@vcu.edu"
//add other define Macros as needed

struct Email
{
    char sender[ADDRESS_SIZE];
    char receiver[ADDRESS_SIZE];
    char subject[SUBJECT_SIZE];
    char body[BODY_SIZE];
    int ID;
    struct sent_date{
            int month;
            int day;
            int year;
    }sent_date;


    //add other struct members as needed
    //consider adding a nested struct here
};



struct Mailbox
{
    int size;
    //add other struct members as needed
    struct Email *emails;
};

/////////////////////////////////////////////////////////////////////////////////////
// This is a sample comment for the initialize function
// You should include a similar comment for each function declared within the .h file
//
// Function     : initialize
// Description  : Initializes the database for CMSC257 project #2 by manually entering // the records using create_email function
// Inputs       : struct Mailbox* - pointer to the database
// Outputs      : void

void initialize (struct Mailbox *ib);
void create_email(char* sender, char* receiver, char* subject, char* body, int month, int day, int year, struct Mailbox *ib);
//add other function declarations as needed

