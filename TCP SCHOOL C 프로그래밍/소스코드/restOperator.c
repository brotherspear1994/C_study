#include <stdio.h>
int main(void)
{
    int num1 = 15, num2 = 8;
    int result;

    result = (num1 > num2) ? num1 : num2;
    printf("%d\n", result);

    int num3 = 4, num4 = 12345668;
    printf("%d byte %d byte", sizeof(num3), sizeof(num4));

}