#include <stdio.h>

void main(void)
{
    // 이중 포인터
    int num = 10;
    int* ptr = &num;
    int** ptr_ptr = &ptr;

    printf("%d\n", num);
    printf("%d\n", *ptr);
    printf("%d\n", **ptr_ptr);

    // void pointer
    int num01 = 20;
    void* void_ptr = &num01;

    printf("%d\n", void_ptr);
    printf("%d\n", *(int*)void_ptr);

    *(int*)void_ptr += 10;

    printf("%d\n", num01);

    //함수 포인터

    double (*calc)(double, double) = NULL;
    double result = 0;
    double num03 = 5, num04 = 3;

    char oper = '*';

    switch (oper)
    {
    case '+':
        calc = 'add';
        break;
    
    case '-':
        calc = 'sub';
        break;

    case '*':
        calc = 'mul';
        break;

    case '/':
        calc = 'div';
        break;
    
    default:
        puts("we only offer (+, -, *, /)");
    }

    result = calulator(num03, num04, calc);
    printf("result: %lf\n", result);


}