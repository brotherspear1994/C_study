#include <stdio.h>

void main(void)
{
    int var = 10;

    printf("var value before local(): %d\n", var);

    local(&var);
    
    printf("var value after local(): %d\n", var);
}

void local(int* ptr_var)
{
    *ptr_var += 10;
}