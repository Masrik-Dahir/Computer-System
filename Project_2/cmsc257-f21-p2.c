//
// Created by Masrik Ahmed Dahir on 11/3/21.
//

//Add program description, author name, last edit date as in the project1
//Do not modify anything below this line

#include <stdio.h>
#include <stdlib.h>
#include "p2-support.h"

void display_inbox_menu(struct Mailbox *ib);

int main(){
    struct Mailbox* ib;
    ib = (struct Mailbox*) malloc(sizeof(struct Mailbox));
    initialize(ib);
    display_inbox_menu(ib);
    free (ib);
    return 0;
}

