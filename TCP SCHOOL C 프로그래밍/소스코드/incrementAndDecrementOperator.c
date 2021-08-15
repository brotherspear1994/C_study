#include <stdio.h>

int main(void)
{
    int num01 = 7;
    int num02 = 7;
    int result1, result2;

    result1 = ++num01 -5;
    result2 = num02++ - 5;

    printf("check: %d %d\n", num01, num02);
    int result3 = num01-- + 5 + 10 + --num01;
    printf("%d %d\n", num01, num02);
    printf("%d\n", result1);
    printf("%d\n", result2);
    printf("%d\n", result3);

    int x = 10;

    int y = x-- + 5 + --x;

    printf("변수 x의 값은 %d이고, 변수 y의 값은 %d입니다.\n", x, y);

}