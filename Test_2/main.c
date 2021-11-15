//
// Copyright Masrik Dahir
//

# include "stdio.h"
# include "math.h"
# include "stdlib.h"

int main(){

//    Allocated memory size
    int n;

    printf("Enter size of array\n");
    scanf("%d",&n);


//    Allocating memory
    int* A = (int*) malloc(n*sizeof(int));
    for (int index = 0; index < n; index ++){
        A[index] = index + 1;
    }
//    new Allocated memory size
    int m = 2*n;


//    Reallocating memory
    int* B = (int*) realloc(A,m*sizeof(int));



//    Printing the allocated memory
    for (int index = 0; index < m; index ++){
        printf("%d ",B[index]);
    }




}

