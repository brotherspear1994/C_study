#include <stdio.h>

int main(void)
{
    int num01 = 15, num02 = 8;

    printf("~bit operator: %d\n", ~num01);
    printf("<<bit operator: %d\n", num02<<1);
    printf(">>bit operator: %d\n", num02>>1);

}