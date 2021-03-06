#include <stdio.h>
#include <stdlib.h>
/*
*
*/
void printArray (int *arr, int size) {
    int i;
    if (arr != NULL) {
        for (i = 0; i < size; i++) {
// Print each element out
            printf("%d ", *(arr + i));
//Print addresses of each element printf ("%p", (arr + i));
//Printing a new line printf ("\n");
        }
    }

}

int main() {
    // Allows user to specify the original array size, stored in variable n1.
    printf ("Enter original array size: ");
    int n1 = 0;
    scanf("%d", &n1);
//a- Create a new array *a1 of n1 ints using malloc
    int *a1 = malloc (n1 * sizeof (int));
//b- Remove comments for if statement below //b- Set each element in a1 to 100 + indexValue ??
     if (a1 == NULL)
        {
            printf("Error! memory not allocated.");
            exit(0);
        }
    int index;
        for (index = 0; index < n1; index++) {
            a1[index] = 100 + index;
        }
    printf("Printing the First array allocated using malloc\n");
//c- Print each element and addresses out (to make sure things look right)
    printArray (a1, n1);
// User specifies the new array size, stored in variable n2.
    printf ("\nEnter new array size: ");
    int n2 = 0;
    scanf("%d", &n2);



//    Task 2
//d- Dynamically change the array a1 to size n2
    a1 = realloc(a1,n2 * sizeof(int));
//e- Remove comments for if statement below
     if (a1 == NULL){
            printf("Error! memory not allocated.");
            exit(0);
        }

//e- If the new array is a larger size, set all new members to 200 + indexValue.
     if (n2 > n1){
         int index;
            for (index = n1; index < n2; index++) {
                a1[index] = 200 + index;
            }

        }
    printf("Printing the reallocated array: \n");
//f- Print each element and addresses out (to make sure things look right)
    printArray(a1, n2);
//g-Free the allocated memory for a1
    free (a1);
//added below line to set a1 = NULL
    a1 = NULL;
    printf("\nEnter new array size to be initialized with 0: ");
    int n3 = 0;
    scanf("%d", &n3);
//h- Remove comments for if statement
//h- Using calloc create a new array and assign it to a2 //with new array size, stored in variable n3.
    int *a2 = (int*) calloc(n3, sizeof(int));
    if (a2 == NULL) {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Printing the array created using calloc: \n");
//i- Print array a2 with size n3
    printArray(a2, n3);
//j- Print array a1 again, How you can  x this problem
/* free(a1) does not mean memory can't be accessed. System is free to use the memory. In C, we have to be careful before accessing such pointers
To fix the above problem, you need to add NULL check into printArray function and after free(a1), set a1=NULL
*/
    printf("Printing deallocated array a1: \n");
    printArray(a1, n2);
// Done with arrays now, free the allocated memory and assign NULL
    free (a2);
    a1 = NULL;
    a2 = NULL;
    printf("Program Successfully Completed!");
}

