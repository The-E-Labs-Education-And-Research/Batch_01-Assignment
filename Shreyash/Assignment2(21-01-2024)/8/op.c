#include<stdio.h>

int main() {
    int integerNumber = 123;
    float floatNumber = 456.789;

    printf("Integer with minimum width 5: %5d\n", integerNumber);


    printf("Integer with zero padding and minimum width 5: %05d\n", integerNumber);

 
    printf("Integer with left alignment and minimum width 5: %-5d\n", integerNumber);

 
    printf("Float with minimum width 8 and 2 decimal places: %8.2f\n", floatNumber);


    printf("Float with 2 decimal places: %.2f\n", floatNumber);

    return 0;
}
