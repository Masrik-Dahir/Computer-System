//
// Created by Masrik Ahmed Dahir on 11/3/21.
//

#define MAILBOX_SIZE 2000
#define ADRESS_SIZE 50
#define SUBJECT_SIZE 200
#define BODY_SIZE 2000
#define NAME_SIZE 20
//CHANGE the email below to your vcu email
#define user_email "e@mail.com"
//add other define Macros as needed

struct Email
{
    char sender[ADRESS_SIZE];
    char receiver[ADRESS_SIZE];
    char subject[SUBJECT_SIZE];
    char body[BODY_SIZE];
    int ID;
//    struct Sent_date date;


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

//add other function declarations as needed
void create_email(char sendeR[50], char recieveR[50], char subjecT[200], char bodY[2000], int montH,int daY, int yeaR, struct Mailbox *iB );
