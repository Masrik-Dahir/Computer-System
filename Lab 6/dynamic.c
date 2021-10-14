#include <stdlib.h>
#include <stdio.h>


void printArray(int *arr, int size){
	int i;
	for( i = 0; i < size; i++) {
		// Print each element out 
		printf("%d   ", *(arr+i));			
		//Print addresses of each element 
		printf("%p", (arr+i));		
		//Printing a new line
		printf("\n");
	}	

}

int main() {


	// Allows user to specify the original array size, stored in variable n1.
	printf("Enter original array size: ");
	int n1 = 0;
	scanf("%d", &n1);
	//a- Create a new array *a1 of n1 ints using malloc
	int *a1 = malloc(n1 * sizeof(int));
	//b- Remove comments for if statment below 
	//b- Set each element in a1 to 100 + indexValue ??
	//	if(a1 == NULL)
	//    {
	//        printf("Error! memory not allocated.");
	//        exit(0);
	//    }



	printf("Printing the first array allocated using malloc\n");
	//c- Print each element and addresses out (to make sure things look right)


	// User specifies the new array size, stored in variable n2.
	printf("\nEnter new array size: ");
	int n2 = 0;
	scanf("%d", &n2);
	//d- Dynamically change the array a1 to size n2

	//e- Remove comments for if statment below
	//e- If the new array is a larger size, set all new members to 200 + indexValue.
	//	if(a1 == NULL)
	//    {
	//        printf("Error! memory not allocated.");
	//        exit(0);
	//    }





	printf("Printing the reallocated array: \n");
	//f- Print each element and addresses out (to make sure things look right)


	//g-Free the allocated memory for a1


	printf("\nEnter new array size to be initialized with 0: ");
	int n3 = 0;
	scanf("%d", &n3);
	//h- Remove comments for if statement
	//h- Using calloc create a new array and assign it to a2
	//with new array size, stored in variable n3.

	//    if(a2 == NULL)
	//    {
	//        printf("Error! memory not allocated.");
	//        exit(0);
	//    }

	printf("Printing the array created using calloc: \n");
	//i- Print array a2 with size n3


	//j- Print array a1 again, How you can fix this problem
	printf("Printing deallocated array a1: \n");






	// Done with arrays now, free the and assign NULL

	//free(a2);
	//a1 = NULL;
	//a2 = NULL;	

	printf("Program Successfully Completed!");
	return 0;
}
