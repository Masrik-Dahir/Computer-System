////////////////////////////////////////////////////////////////////////
//
// File          : cmsc257-f21-p1.c
// Description   : This is a part of the starter code for CMSC 257 
//	               Plese see the course page for more details	
//
// Author        : Masrik Dahir
// Last Modified : 10/13/2021
//

// Include Files
#include <stdio.h>
#include <stdlib.h>

// Project Includes
#include "p1-support.h"

// Functions
///////////////////////////////////////////////////////////////////////
//
// Function     : main
// Description  : The main function for the CMSC257 project #1
// 
// Inputs       : argc - the number of command line parameters
//                argv - the parameters
// Outputs      : 0 if successful

int main(int argc, char *argv[]) {

    // Local variables
    int int_array1[10];
    unsigned int uint_array1[10], uint_array2[10];
    int i;
    //Add more local variables here as needed

    //Checking if there are less than 10 inputs
    if (argc < 11)
    {
        //Exit if there are less than 10 inputs
        printf("Exiting the program, missing input");
        return 0;
    }


    // Step a - Read in the integer numbers input at
    // the time of exeution and save them into int_array1
    for (i=1; i<11; i++) {
        int_array1[i-1] = atoi(argv[i]);//converting input to integer

    }


    // Step b - Reverse the order of array elements in int_array1
    //          using swap_ints function.
    for (i=0; i<5;i++){
        swap_ints(&int_array1[i],&int_array1[9-i]);
    }

    // Step c - Get an integer user input and add that number to all elements
    //          of the int_array1 using bitwise_add function
    printf("Enter an integer offset value\n");
    int user_input;
    scanf("%d",&user_input);
    int index = 0;
    for(index=0; index<10;index++){
        int_array1[index] = bitwise_add(int_array1[index], user_input);
    }


    // Step d - Get the absolute values of the elements in the int_array using
    //	        bitwise_abs function and save them in uint_array1.
    //        - Print all numbers in a single line using display_array function
    for(index=0; index<10;index++){
        uint_array1[index] = bitwise_abs(int_array1[index]);
    }
    display_array(uint_array1,10);


    // Step e - Get the mod 32 of numbers in the uint_array1
    //          (in the range 0,â€¦,31) using bitwise_mod32 function
    //          then save them into uint_array2.
    //        - Print all elements of uint_array2 using display_array function
    for(index=0; index<10;index++){
        uint_array2[index] = bitwise_mod_32(uint_array1[index]);
    }
    display_array(uint_array2,10);


    // Step f - Get user input (an integer in the range of 0 - 31)
    //          and shift left each element of uint_array2 with that number
    //		    - Print all elements of uint_array2 using display_array function
    printf("Enter an integer shift value\n");
    int user_input2;
    scanf("%d",&user_input2);
    for(index=0; index<10;index++){
        uint_array2[index] = bitwise_shift_left(uint_array2[index],user_input2);
    }
    display_array(uint_array2,10);


    // Step g - for each integer in uint_array2 print:
    //          number, number of set bits, even or odd
    //          using respective functions and in the format specified within
    //          the project manual
    for(index=0; index<10;index++){

        printf("[number: %d,\t# of 1 bits: %d,\t",uint_array2[index],count_set_bits(uint_array2[index]));
        if (odd_or_even(uint_array2[index]) == 1){
            printf("\t odd]\n");
        }else{
            printf("\teven]\n");
        }
    }


    // Step h - Print each element of uint_array2 in a separate line along with
    // 		      the binary representation of each of the numbers using
    // 		      binary_string function.
    for(index=0; index<10;index++) {
        char str[34];
        binary_string(str, uint_array2[index]);
        printf("[number: %d,\tbinary: %s]\n", uint_array2[index],str);
    }


    // Return successfully
    return(0);
}