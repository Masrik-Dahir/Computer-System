#include <stdio.h>

void array_2d(int i, int i1, int pInt[3][4]);

void array_1d(int i, int pInt[3]);

int main() {
//# include <stdio.h>
//    int x;
//    x = 5;
//    printf("Variable x is located at %p\n", &x);
//    int *p = NULL;
//    int *q = NULL;
//    p = &x;
//    printf("Pointer value of p is %p\n",p);
//    printf("Dereferenced value of p is %d, and x = %d\n", *p, x);
//    printf("Dereferenced value of p is %d, and x = %d\n", p, x);
//    int a = 42;
//    int b = 7;
//    int c = 999;
//    int *t = &a; // t = 42
//    int *u = NULL;
//    printf("%d %d\n", a, *t);
//    c = b; //c = 7
//    u = t; //u = 42
//    printf("%d %d\n", c, *u);
//    a = 8; // t = 8
//    b = 8;
//    printf("%d %d %d %d %d\n", b, c, *t, *u, t);
//    *t = 123; // a = 123 // u = 123
//    printf("%d %d %d %d %d %d\n", a, b, c, *t, *u, t);
//    t = &c;
//    c = 555;
//    printf("%d %d %d %d %d %d\n", a, b, c, *t, *u, t);
//    int **v = &t;
//    printf("%d\n", **v);
//
//    int d[3] = { 1, 2, 3 };
//    printf("sizeof(d) = %llu\n", sizeof(d));
//    printf("sizeof(d) = %d\n", sizeof(3.14f));



    int d[3] = { 1, 2, 3 };
//    printf("The array starts at %p\n", d);
//    printf("The first element is %d\n", *d);
//    printf("The second element is %d\n", *(d+1));
//    printf("The third element is %d\n", *(d+2));
//    for (int i=0; i<3; i++) {
//        printf("Element: %d\n", d[i]);
//    }
//    for (int *w = d; w < (d+3); w++) {
//        printf("Element: %d\n", *w);
//    }
    int data[3][4] = {{1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12}};
//    printf("address of first element of row 0 is %p\n", *(data + 0) + 0);
//    printf("value of first element of row 0 is %d\n", **(data + 0) + 0);
//
//    for (int *w = *data; w < *((data + 3) + 4); w++) {
//        printf("Element: %p\n", w);
//    }

    /*Counter variables for the loop*/
    int i, j;
    for(i=0; i<3; i++) {
        for(j=0;j<4;j++) {
            printf("%p ", data[i]);
        }
        printf("\n");
    }


//    printf("1-D array:\n");
//    array_1d(3,d);
//    printf("\n\n2-D array:\n");
//    array_2d(3,4,data);
    return 0;
}

void array_1d(int m, int arr[m]) {
    int i;
    for (i = 0; i < m; i++)
        printf("%d ", arr[i]);
}

void array_2d(int m, int n, int arr[m][n]) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
