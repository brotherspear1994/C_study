#include <stdio.h>

int main(void)
{
    char *pointer01 = 0;
    int *pointer02 = NULL;
    double *pointer03 = 0x00;

    printf("#%x\n", ++pointer01);
    printf("#%x\n", ++pointer02);
    printf("#%x\n", ++pointer03);

    int num01 = 10;
    int num02 = 20;

    int *ptr_num01 = &num01;
    int *ptr_num02 = &num02;

    if (ptr_num01 != ptr_num02)
    {
        printf("%d\n", *ptr_num01);
        printf("%d\n", *ptr_num02);
        
        ptr_num02 = ptr_num01;
    }
    
    printf("%d\n", *ptr_num01);
    printf("%d\n", *ptr_num02);
    printf("%d\n", ptr_num01);
    printf("%d\n", ptr_num02);

}