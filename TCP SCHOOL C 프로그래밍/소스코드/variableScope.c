#include <stdio.h>

void local(void);
int var;


int main(void)
{
    printf("the global scope var is %d\n", var);
    int i = 3;
    int var = 5;

    printf("the main scope var is %d\n", var);

    if (i < 10)
    {
        local();
        int var = 10;
        printf("the if scope var is %d\n", var);
    }

    printf("the main scope var is %d\n", var);
    printf("it is non possible to get to the global scope var any more\n");
}


void local(void)
{
    int var = 30;
    printf("the local func socpe var is %d\n", var);
}


