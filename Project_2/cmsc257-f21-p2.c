////////////////////////////////////////////////////////////////////////
//
// File          : cmsc257-f21-p2.c
// Description   : This is a part of the starter code for CMSC 257 project 2
//
// Author        : Masrik Dahir
// Last Modified : 10/13/2021
///////////////////////////////////////////////////////////////////////
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

