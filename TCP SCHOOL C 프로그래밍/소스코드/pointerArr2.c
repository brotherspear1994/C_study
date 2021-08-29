#include <stdio.h>

int main(void)
{
    int len_arr, i;
    int num01 =10, num02 = 20, num03 = 30;

    int* ptr_arr[3] = {&num01, &num02, &num03};

    len_arr = sizeof(ptr_arr)/sizeof(ptr_arr[0]);

    for (i=0; i < len_arr; i++)
    {
        printf("%d\n", *ptr_arr[i]);
    }

    int arr[2][3] = {
        {1,2,3},
        {4,5,6}
    };

    int (*ptr_arr_two_demenison)[3] = arr;
    int *test_ptr_arr[2] = {&arr[0], &arr[1]};

    printf("normal: %d\n", arr[1][1]);
    printf("arr_pointer: %d\n", ptr_arr_two_demenison[1][1]);
    printf("test: %d", *test_ptr_arr[1]);

    return 0;
}