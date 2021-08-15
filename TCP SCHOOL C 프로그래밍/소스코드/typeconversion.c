#include <stdio.h>

int main(void)
{
    char ch = 200;
    int num1 = 3.14;
    double num2 = 5;

    printf("check: %d\n", ch);
    printf("check: %d\n", num1);
    printf("check: %f\n", num2);

    double result1 = 3.14+5;
    double result2 = 3.14+5.0f;
    
    printf("check: %f\n", result1);
    printf("check: %f\n", result2);

    int num01 = 1, num02 = 4;
    double result3 = num01 / num02;
    double result4 = (double)num01 / num02;
    printf("result3: %f\n", result3);
    printf("result4: %f\n", result4);
}