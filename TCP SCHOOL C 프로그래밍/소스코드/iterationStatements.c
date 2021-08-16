#include <stdio.h>

int main(void)
{
    int i = 0, num01 = 3;
    // printf("type in the value of num: ");
    // scanf("%d", &num);

    while (i < num01)
    {
        printf("the loop time: %d\n", i+1);
        i++;
    }
    printf("the loop is over and the num of i is %d\n", i);

    int j = 0, num02 = 0;
    do {
        printf("the do while time: %d\n", j+1);
        ++j;
    } while (j < num02);
    printf("the number of j is %d\n", j);

    int f;
    int limit = 5;
    for (f=0; f < limit; f++) 
    {
        printf("the f num of for loop is: %d\n", f+1);
    }
    printf("the number of final f is %d\n", f);
}

