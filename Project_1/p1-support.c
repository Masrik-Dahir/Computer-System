#include "p1-support.h"
#include <stdio.h>
#include <string.h>
#define CHARBIT 8
////////////////////////////////////////////////////////////////////////
//
// File          	: p1support.c
// Description    : This is a set of general-purpose utility functions 
//									we use for the 257 project #1.
// Author					: Masrik Dahir
// Date						: 10/13/2021
// Notes					:


////////////////////////////////////////////////////////////////////////
// Function Definitions
////////////////////////////////////////////////////////////////////////

//Function definitions as decribed in the project manual 

//Shortly describe function here
void display_array(unsigned int* arr, int size){
    int i;
    for(i=0;i<size;i++) {
        if(i == 0) {
            printf("{ ");
        }
        printf("%d", arr[i]);
        if(i != size-1){
            printf(", ");
        } else{
            printf("}");
        }
    }
    printf("\n");
}	


//Additional function definitions for helper functions
int bitwise_add(int num1, int num2){
    unsigned int car = num1 & num2;
    unsigned int res = num1 ^ num2;
    while(car != 0){
        unsigned int car_after_shift = car << 1;
        car = res & car_after_shift;
        res ^= car_after_shift;
    }
    return res;
}

int bitwise_shift_left(int num1, int num2){
    return num1 << num2;
}

int count_set_bits(unsigned int number)
{
    int count = 0;
    while (number != 0)
    {
        if ((number & 1) == 1) {
            count++;
        }
        number = number >> 1;
    }
    return count;
}

void binary_string(char *str, unsigned int number) {
    long long int mask = 2147483648; // 2^31
    int i = 2;
    str[0] = 'O';
    str[1] = 'b';
    while (mask > 0) {
        if ((number & mask) == 0) {
            str[i] = '0';
        }
        else {
            str[i] = '1';
        }
        i = bitwise_add(i,1);
        mask = mask >> 1 ;
    }
    str[34] = '\0';
}

int bitwise_mod_32(int num){
    if (num < 32){
        return num;
    }
    else{
        while (num >= 32) {
            num = bitwise_subtract(num, 32);
        }
    }
    return num;
}

int bitwise_subtract(int num1, int num2){

    while (num2 != 0){
        int borrow = (~num1) & num2;
        num1 = num1 ^ num2;
        num2 = borrow << 1;
    }
    return num1;
}


int bitwise_abs(int n){
    if(n<0){
        int const mask = n >> (sizeof(int) * CHARBIT - 1);
        return ((n + mask) ^ mask);
    }
    else {
        return n;
    }
}


int bit_get(int num1, int num2){
    return (num1 >> num2) & 1;
}

int odd_or_even(unsigned int num){
    return (num & 1);
}

void swap_ints(int *x, int *y){
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}