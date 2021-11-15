//
// Copyright Masrik Dahir
//

# include "stdio.h"
# include "math.h"
# include "stdlib.h"
# include "string.h"
# define LIMIT 5
# define CUBE(x) x*x*x

struct Point{
    int x,y;
} P1 = {233, 45}, P2 = {23, 43};
struct Point *P3 = &P1;
struct Point *P4 = &P2;

enum State{
    Working = 1, Froze = 0, Failed = -1
};

typedef char* String;
typedef long long superlong;

void space(int n){
    for (int i = 0; i < n; i++){
        printf("\n");
    }
}
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
    for (int index = n; index < 2*n; index++){
        A[index] = index + 101;
    }
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

    printf("p1.x = %d, P3->x = %d,\np1.y = %d, P3->y = %d\n",P1.x, P3->x, P1.y, P3->y);
    printf("p2.x = %d, P4->x = %d,\np2.y = %d, P4->y = %d\n",P2.x, P4->x, P2.y, P4->y);
    printf("Working = %d, Failed = %d, Froze = %d\n",Working, Failed, Froze);

    String variable = "Any String you like, regardless of size\n";
    printf(variable);

    for (int index = 0; index < LIMIT; index++){
        printf("%d ",index);
    }
    space(1);
    printf("%d",CUBE(5));
    space(1);
    printf("%d", strcmp("asx","asc"));



}


