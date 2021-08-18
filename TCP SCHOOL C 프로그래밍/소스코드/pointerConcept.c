#include <stdio.h>

int main(void)
{
    int num01 = 1234;
    double num02 = 3.14;
    int *ptr_num01 = &num01;
    double *ptr_num02 = &num02;

    printf("size of pointer %d\n", sizeof(num01));
    printf("the value of ptr_num01 address: %d\n", ptr_num01);
    printf("the value of ptr_num02 address: %d\n", ptr_num02);
    printf("the value of data that ptr_num01 is refering to: %d\n", *ptr_num01);
    printf("the value of data that ptr_num02 is refering to: %.2f\n", *ptr_num02);

}