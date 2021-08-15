#include <stdio.h>

int main(void)
{
    int num = 2147483647;
    printf("the number assigned in num is %d\n", num);

    num =  2147483648;
    printf("overflow occurred: %d\n", num);

    float num01 = 3.1415926535897932;
    printf("the float number is %.20f\n", num01);
    double num02 = 3.1415926535897932;
    printf("the float number is %.20f\n", num02);

    char a = 'a';
    printf("the character of a is %c\n", a);
    printf("the num of a is: %d\n", a);

}