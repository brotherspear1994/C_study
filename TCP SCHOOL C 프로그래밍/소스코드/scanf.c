#include <stdio.h>

int main(void)
{
    // int num1, num2;

    // printf("type in first value: ");
    // scanf("%d", &num1);
    // printf("type in second value: ");
    // scanf("%d", &num2);

    // printf("the total sum is %d\n", num1+num2);

    // int num01, num02;
    // printf("type in two integers: ");
    // scanf("%d %d", &num01, &num02);

    // printf("if susbscribing in these two integers in ox, %o %o\n", num01, num02);
    // printf("doing the same in hexa, %x %x\n", num01, num02);

    float num001;
    double num002;

    printf("첫번째 시도: ");
    scanf("%f %f", &num001, &num002);
    printf("입력받은 값 확인: %f %f\n", num001, num002);

    printf("두번째 시도: ");
    scanf("%f %lf", &num001, &num002);
    printf("입력받은 값 확인: %f %f\n", num001, num002);


    return 0;
}