#include <stdio.h>

void main(void)
{
    int arr[3] = {10,20,30};
    int* ptr_arr = arr;

    printf("%d, %d, %d\n", arr[0], arr[1], arr[2]);
    printf("%d, %d, %d\n", ptr_arr[0], ptr_arr[1], ptr_arr[2]);
    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(ptr_arr));
    
    printf("%d, %d, %d\n", *(arr+0), *(arr+1), *(arr+2));
}