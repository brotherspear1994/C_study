#include <stdio.h>

int main(void)
{
    int arr01[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr02[3][4] = 
    {
        {1, 2, 3, 4},
        {4, 5, 6, 7},
        {7, 8, 9, 10}
    };
    int arr03[3][4] =
    {
        {1, 2},
        {4, 5, 6},
        {9}
    };

    int arr04[][4] = 
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int a;
    for (a=0 ; a < 4; a++)
    {   
        int i;
        for (i=0; i < 3; i++)
        {
            int j;
            for (j=0; j < 3; j++)
            {   
                if (a==0)
                {
                    printf("%d ", arr01[i][j]);
                }
                if (a==1)
                {
                    printf("%d ", arr02[i][j]);
                }
                if (a==2)
                {
                    printf("%d ", arr03[i][j]);
                }
                if (a==3)
                {
                    printf("%d ", arr04[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");      
    }

    printf("%d\n", sizeof(arr01[0])/sizeof(arr01[0][0]));
    printf("%d\n", sizeof(arr01) / sizeof(arr01[0][0]) / (sizeof(arr01[0]) / sizeof(arr01[0][0])));

}