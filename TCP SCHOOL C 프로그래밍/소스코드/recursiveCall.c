#include <stdio.h>
int sum(int n);
int rSum(int n);

int main(void)
{
    int first_result;
    int second_result;
    
    first_result = sum(5);

    second_result = rSum(5);

    printf("no recursive: %d\n", first_result);
    printf("recursive: %d\n", second_result);
    
}


int sum(int n)
{
    int i;
    int result = 0;

    for (i=1; i<=n; i++)
    {
        result += i;
    }

    return result;
}

int rSum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n+rSum(n-1);
}