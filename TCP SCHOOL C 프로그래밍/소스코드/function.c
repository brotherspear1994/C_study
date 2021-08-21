#include <stdio.h>



int main(void)
{
    int result;

    result = bigNum(1, 5);
    printf("the bigger num is %d\n", result);
}

int bigNum(int num01, int num02)
{
    if (num01 >= num02)
    {
        return num01;
    }
    else
    {
        return num02;
    }
}