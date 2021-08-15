#include <stdio.h>

int main(void)
{
    int num01 = 7;
    int num02= 7, num03 = 7, num04 = 5;
    double num05 = 5;

    num01 = num01-5;
    num02 -= 5;
    num03 =- 5;
    num04 %= 2;
    num05 /= 2;

    printf("num01: %d\n", num01);
    printf("num02: %d\n", num02);
    printf("num03: %d\n", num03);
    printf("num04: %d\n", num04);
    printf("num05: %.1f\n", num05);

}