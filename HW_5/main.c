#include <stdio.h>
#include <limits.h>

int mask_msb(int x, int y)
{
    return ( x & 0xFF000000) | (y & 0x00FFFFFF);
}

unsigned replace_byte(unsigned x, int i, unsigned int b){
    int to_mask = 0xFF, result;

    if (i==0){
        result = (x & ~to_mask)|b;
    }
    else{
        to_mask <<= (int)i*8;
        b <<= (int)i*8;
        result = (x & ~to_mask)|b;
    }

    return result;
}

int saturating_add(int x, int y){
    int sum = x + y;
    int operation = (sizeof(int) << 3) -1;
    int x_negative_mask = (x >> operation);
    int y_negative_mask = (y >> operation);
    int s_negative_mask = ( sum >> operation);
    int positive_over_mask = ~x_negative_mask & ~y_negative_mask & s_negative_mask;
    int negative_over_mask = x_negative_mask & y_negative_mask & ~s_negative_mask;
    int over_mask = positive_over_mask | negative_over_mask;
    int solution = (~over_mask & sum) | (positive_over_mask & INT_MAX) |
            (negative_over_mask & INT_MIN);
    return solution;
}

int main(void)
{

//    Question 1
    printf("0x%X\n\n", mask_msb(0x89ABCDEF, 0x12345678));

//    Question 2
    printf("%X\n", replace_byte(0x12345678,0,0xEF));
    printf("%X\n", replace_byte(0x12345678,2,0xEF));
    printf("%X\n\n", replace_byte(0x12345678,3,0xEF));

//    Question 3
    printf("%d\n", saturating_add(1000000000,1000000000));
    printf("%d\n", saturating_add(1500000000,1500000000));
    printf("%d\n", saturating_add(-1500000000,1500000000));
    printf("%d\n\n", saturating_add(-1500000000,-1500000000));

    getchar();
    return 0;
}