//
// Copyright Masrik Dahir
//

# include "stdio.h"
# include "math.h"
# include "stdlib.h"

int main(){
    int n;
    printf("Enter size of array\n");

    scanf("%d",&n);

//    Allocating memory
    int* A = (int*) malloc(n*sizeof(int));
    for (int index = 0; index < n; index ++){
        A[index] = index + 1;
    }

//    Reallocating memory


//    Printing the allocated memory
    for (int index = 0; index < n; index ++){
        printf("%d ",A[index]);
    }




}

