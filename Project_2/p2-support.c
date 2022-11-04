////////////////////////////////////////////////////////////////////////
//
// File           : p2-support.c
// Description    : This is a set of general-purpose utility functions
//									we use for the 257 project #2.
// Author		  : Masrik Dahir
// Date			  : 11/05/2021
// Notes		  :
////////////////////////////////////////////////////////////////////////

#include "p2-support.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void initialize (struct Mailbox *ib)
{
    //allocate memory for 2000 emails
    ib->emails = malloc(sizeof (struct Email) * MAILBOX_SIZE);
    ib->size = 0;


    create_email ("asonmez@mail.com", user_email, "Welcome to your inbox.",
                  "Welcome to your inbox, just wanted to say hi. Here's hoping you get all your code done.",
                  11, 20, 2020, ib);
    create_email ("mmartinez@mail.com", user_email, "Padding out your inbox.",
                  "Yet another email just to pad out your inbox, have fun!",
                  11,30,2020, ib);
    create_email ("dboyle@mail.com", user_email, "3rd email!",
                  "Alright, time for another email for your inbox. Not going too lie, it's a bit of a pain coming up with stuff for these strings. Anyways, have fun with your code!",
                  12,2,2020, ib);
    create_email ("cbluer@mail.com", user_email, "4th email!",
                  "Content of fourth email. More coding, more fun!",
                  12,8,2020, ib);
    create_email ("cboyle@mail.com", user_email, "5th email!",
                  "Content of fifth email. Coding is fun-tastic!",
                  12,18,2020, ib);
    create_email ("sblack@mail.com", user_email, "6th email!",
                  "Content of fifth email. Coding is fun-tastic!",
                  1,1,2021, ib);
    create_email ("sblack@mail.com", user_email, "7th email!",
                  "Body of sixth email. Coding is fun-tastic!",
                  1,5,2021, ib);
    create_email ("sblack@mail.com", user_email, "8th email!",
                  "Body of eighth email. Coding is fun-tastic!",
                  2,15,2021, ib);
    create_email ("sblack@mail.com", user_email, "9th email!",
                  "Body of ninth email. Coding is fun-tastic!",
                  2,25,2021, ib);
    create_email ("dboyle@mail.com", user_email, "Last email!",
                  "Body of tentth email. Coding is fun-tastic!",
                  3,15,2021, ib);

}


void display_inbox_menu(struct Mailbox *ib) {
    int ch = 8;
    int j = 0;
    while (ch != 7){
        printf("***************   %s INBOX   ***************\n", user_email);
        printf("***************   Total Inbox: %04d   ***************\n", ib -> size);
        printf("1. Show Inbox\n");
        printf("2. Show Email by ID\n");
        printf("3. Sort Inbox by Sender\n");
        printf("4. Sort inbox by ID\n");
        printf("5. Search Inbox by Keyword\n");
        printf("6. Delete\n");
        printf("7. Exit\n");

        scanf("%d", &ch);
        while(getchar() != '\n');

        switch(ch){
            case 1:
                printf("ID   Sender---------------   MM/DD/YYYY   SUBJECT-------- \n ");
                printf("--   ---------------------   --/--/----   --------------- \n");
                int i;

                for(i = 0; i < ib->size; i++){
                    char show_sub[SUBJECT_SIZE] = " ";
                    strncpy(show_sub, ib->emails[i].subject, 15);

                    printf("-%02d - %-20s - %02d/%02d/%d - %-s \n",ib->emails[i].ID ,ib->emails[i].sender, ib->emails[i].sent_date.month, ib->emails[i].sent_date.day, ib->emails[i].sent_date.year, show_sub);
                    show_sub[15] = 0;
                }

                break;

            case 2:
                printf("Enter the ID of the email you want to read\n");
                int index;
                scanf("%d", &index);
                char sub[SUBJECT_SIZE];
                strncpy(sub, ib->emails[index].subject, 25);
                printf("%s - %s \nEmail Received on: %02d/%02d/%d \n%s\n", ib->emails[index].sender, sub, ib->emails[index].sent_date.month,
                       ib->emails[index].sent_date.day, ib->emails[index].sent_date.year, ib->emails[index].body);
                break;

            case 3:

                for(i=0; i < ib -> size; i++){
                    for(j = i+1; j < ib-> size; j++){

                        if(strcmp(ib->emails[i].sender, ib->emails[j].sender) > 0 ){
                            struct Email temp = ib->emails[i];
                            ib->emails[i] = ib->emails[j];
                            ib->emails[j] = temp;
                        }
                    }
                }
                break;

            case 4:
                for(i=0; i < ib -> size; i++){
                    for(j = i+1; j < ib-> size; j++){
                        if(ib->emails[i].sent_date.year >  ib->emails[j].sent_date.year){
                            struct Email temp = ib->emails[i];
                            ib->emails[i] = ib->emails[j];
                            ib->emails[j] = temp;
                        }

                        if(ib->emails[i].sent_date.year == ib -> emails[j].sent_date.year
                           && ib -> emails[i].sent_date.month > ib -> emails[j].sent_date.month){
                            struct Email temp = ib->emails[i];
                            ib->emails[i] = ib->emails[j];
                            ib->emails[j] = temp;
                        }

                        if(ib->emails[i].sent_date.year == ib -> emails[j].sent_date.year
                           && ib -> emails[i].sent_date.month == ib -> emails[j].sent_date.month
                           && ib -> emails[i].sent_date.day > ib -> emails[j].sent_date.day){
                            struct Email temp = ib->emails[i];
                            ib->emails[i] = ib->emails[j];
                            ib->emails[j] = temp;
                        }

                    }
                }
                break;

            case 5:
                printf("Enter the keyword you are searching for:\n");
                char KW[20];
                scanf("%s",KW);
                printf("ID   Sender---------------   MM/DD/YYYY   SUBJECT-------- \n ");
                printf("--   ---------------------   --/--/----   --------------- \n");

                for(i=0; i< ib->size; i++){
                    char* first = strstr(ib->emails[i].sender, KW);
                    char* second = strstr(ib->emails[i].subject, KW);
                    char* third = strstr(ib->emails[i].body, KW);
                    if (first != NULL || second != NULL || third != NULL){

                        printf("-%02d - %-20s - %02d/%02d/%d - %-s \n",ib -> emails[i].ID ,ib->emails[i].sender,
                               ib->emails[i].sent_date.month,ib->emails[i].sent_date.day, ib->emails[i].sent_date.year,
                               ib->emails[i].subject);
                    }
                }
                break;

            case 6:
                printf("Enter the ID of the e-mail you want to delete:\n");
                int v_id;
                scanf("%d", &v_id);
                for(i=0; i< ib->size; i++){
                    if(ib->emails[i].ID == v_id){
                        for(j= i; j < ib->size - 1; j++){
                            ib->emails[j] = ib->emails[j + 1];
                        }
                    }
                }
                ib->size--;
                printf("Email with ID = %d is deleted\n", v_id);
        }
    }
    free(ib->emails);
    printf("Exiting e-mail client - Good Bye!\n");

}


void create_email(char* sender, char* receiver, char* subject, char* body, int month, int day, int year, struct Mailbox *ib){
    int count = ib -> size;
    strncpy(ib -> emails[count].sender, sender, ADDRESS_SIZE);
    strncpy(ib -> emails[count].receiver, receiver, ADDRESS_SIZE);
    strncpy(ib -> emails[count].subject, subject, SUBJECT_SIZE);
    strncpy(ib -> emails[count].body, body, BODY_SIZE);
    ib -> emails[count].sent_date.month = month;
    ib -> emails[count].sent_date.day = day;
    ib -> emails[count].sent_date.year = year;
    ib -> emails[count].ID = count;
    ib -> size++;
}




