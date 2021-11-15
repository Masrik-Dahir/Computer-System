//
// Copyright Masrik Dahir
//

# include "stdio.h"
# include "math.h"
# include "stdlib.h"


void print(int* array, int size){
    for (int index = 0; index < size; index ++){
        printf("%d ",array[index]);
    }
    printf("\n\n");
}


int main(){

//    Allocated memory size
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);


//    Allocating memory via malloc
    int* A = (int*) malloc(n*sizeof(int));

    for (int index = 0; index < n; index++){
        A[index] = index + 1;
    }
    print(A,n);



//    Reallocating memory via realloc
    int* B = (int*) realloc(A,2*n*sizeof(int));
    print(B, 2*n);


//    Free the memory used by A and B
    free(A);


//    Allocating memory by calloc
    int* C = (int*) calloc(n,sizeof(int));
    print(C, n);
    free(C);

    /**
     * int* B = (int*) realloc(A,0) --> equivalent to free()
     * int* B = (int*) realloc(Null,m*sizeof(int)) --> equivalent to malloc
     */


}


