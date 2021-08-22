#include <stdio.h>

int main(void)
{
    int i;
    int n = 3;
    int first_grade[3];
    int second_grade[3] = {65, 80, 70};
    int third_grade[3] = {23,66,32}; // 배열의 선언과 동시에 초기화 하면 자동으로 배열의 길이가 설정 됨.

    first_grade[0] = 65;
    first_grade[1] = 80;
    first_grade[2] = 70;

    int result01 = 0 , result02 = 0;

    for (i=0; i < n; i++)
    {
        result01 += first_grade[i];
    }

    for (i=0; i < n; i++)
    {
        result02 += second_grade[i];
    }

    printf("total, average of first_grade: %d, %f\n", result01, (double)result01/3);
    printf("total, average of second_grade: %d, %f\n", result02, (double)result02/3);

    /* ------------------------------------------------------------------- */

    // 의도치 않은 배열의 초기화
    int arr[3] = {1,2,3};
    arr[3] = 4;

    int j;

    for (j=0; j <= sizeof(arr)/sizeof(arr[0]); j++)
    {
        printf("%d, ", arr[j]);
    }
    printf("\n");

    printf("test: %d, %d, %f, %d\n", sizeof(int), sizeof(int)*4, (double)sizeof(arr), sizeof(arr[0]));

}