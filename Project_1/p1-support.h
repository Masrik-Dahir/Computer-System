#ifndef CMSC257_P1SUPPORT_INCLUDED
#define CMSC257_P1SUPPORT_INCLUDED
////////////////////////////////////////////////////////////////////////
//
// File          	: p1support.h
// Description    : Headers of general-purpose utility functions 
//					          we use for the 257 project #1.
// Author					: Masrik Dahir
// Date						: 10/13/2021
// Notes					:
////////////////////////////////////////////////////////////////////////
// Add comments for each function below in the following format
///////////////////////////////////////////////////////////////////////
//
// Function       : display_array
// Description    : display the array in curly bracket {}
// 
// Inputs         : an array of 10 integers
// Outputs        : void
////////////////////////////////////////////////////////////////////////
//
// Function       : swap_ints
// Description    : swaps the value of two integers without using a temporary value
// 
// Inputs         : two integer pointers
// Outputs        : void
////////////////////////////////////////////////////////////////////////
//
// Function       : bitwise_abs
// Description    : returns the absolute value (unsigned integer) of an integer using bitwise operators
//
// Inputs         : an integer
// Outputs        : int
////////////////////////////////////////////////////////////////////////
//
// Function       : bitwise_mod_32
// Description    : returns the mod of 32 for an integer using bitwise operators
//
// Inputs         : an integer
// Outputs        : int
////////////////////////////////////////////////////////////////////////
//
// Function       : bitwise_shift_left
// Description    : shifts the first parameter to the left by the amount of second parameter
//
// Inputs         : two integers; the range for the second integer is 0 to 31
// Outputs        : int
////////////////////////////////////////////////////////////////////////
//
// Function       : count_set_bits
// Description    : returns number of 1's in bitwise representation of a number
//
// Inputs         : an unsigned integer
// Outputs        : unsigned int
////////////////////////////////////////////////////////////////////////
//
// Function       : odd_or_even
// Description    : Returns 1 if  the unsigned integer input is odd and 0 if the input is even
//
// Inputs         : int
// Outputs        : unsigned int
////////////////////////////////////////////////////////////////////////
//
// Function       : binary_string
// Description    : fills the text string pointer with a binary representation of the integer which is suitable for printing
//
// Inputs         : a pointer to a string, and an unsigned int
// Outputs        : void
////////////////////////////////////////////////////////////////////////
//
// Function       : bit_get
// Description    : extracts the specified bit from a given number
//
// Inputs         : two integers
// Outputs        : int
////////////////////////////////////////////////////////////////////////
//
// Function       : bitwise_subtract
// Description    : subtract the second integer from the first integer using only bitwise operations
//
// Inputs         : two integers
// Outputs        : int
////////////////////////////////////////////////////////////////////////
//
// Function       : bitwise_add
// Description    : adds two integer parameters using only bitwise operations
//
// Inputs         : two integers
// Outputs        : int

////////////////////////////////////////////////////////////////////////
// Functional Prototypes
////////////////////////////////////////////////////////////////////////

// This function prints out the array of integer values
void display_array(unsigned int*, int);

// Add other function prototypes

// This function swaps the value of two integers without using a temporary value
void swap_ints(int *x, int *y);

// This function returns the absolute value (unsigned integer) of an integer using bitwise operators
int bitwise_abs(int n);

// This function returns the mod of 32 for an integer using bitwise operators
int bitwise_mod_32(int num);

// This function shifts the first parameter to the left by the amount of second parameter
int bitwise_shift_left(int num1, int num2);

// This function returns number of 1's in bitwise representation of a number
int count_set_bits(unsigned int number);

// This function returns 1 if  the unsigned integer input is odd and 0 if the input is even
int odd_or_even(unsigned int num);

// This function fills the text string pointer with a binary representation of the integer
void binary_string(char *str, unsigned int number);

// This function extracts the specified bit from a given number
int bit_get(int num1, int num2);

// This function subtract the second integer from the first integer using only bitwise operations
int bitwise_subtract(int num1, int num2);

// This function adds two integer parameters using only bitwise operations
int bitwise_add(int num1, int num2);

#endif // CMSC257_P1SUPPORT_INCLUDED
