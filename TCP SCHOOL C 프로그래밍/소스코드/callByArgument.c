#include <stdio.h>

void local(int);

int main(void)
{
    int var = 10;

    local(var);
    
    printf("var value after executing local(): %d\n", var);

    return 0;
}

void local(int num)
{
    num += 10;
    printf("num value: %d\n", num);
}