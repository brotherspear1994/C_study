#include <stdio.h>

int main(void)
{
    int i;
    int except_num = 3;

    for (i=1; i < 20; i++)
    {
        if (i%except_num==0) 
        {
            continue;
        }
        printf("%d\n", i);
    }

    int start_num = 1;
    int end_num = 10;
    int sum = 0;

    while (1)
    {
        sum += start_num;
        if (start_num == end_num)
        {
            break;
        }
        start_num++;
    }
    printf("the total sum is: %d\n", sum);

    int f, g;

    for (f = 2; f <= 5; f++)
    {
        for (g = 1; g <= 10; g++)
        {
            printf("%d * %d = %d\n", f, g, f*g);
            if (f == g)
            {
                break;
            }
        }
        printf("\n");
    }
    
    
}