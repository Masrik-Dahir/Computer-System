//
// Created by Masrik Ahmed Dahir on 11/3/21.
//

//Add program description, author name, last edit date as in project1
//Add necessary include statements

#include <stdlib.h>
#include "p2-support.h"


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



void display_inbox_menu(struct Mailbox *pMailbox) {

}




