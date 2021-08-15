#include <stdio.h>

int main(void)
{
    int num1 = -3, num2 = 7;
    int result1, result2;

    result1 = (num1 > 0)&&(num2 < 0);
    result2 = (num1 < 0)||(num2 < 0);


    printf("the result of && is: %d\n", result1);
    printf("the result of || is: %d\n", result2);
    printf("the result of ! is: %d\n", !result2);
}