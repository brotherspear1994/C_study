#include <stdio.h>

int main(void)
{
    int num =3;
    if (num < 5)
    {
        printf("the number is smaller than 5\n");
    }
    else
    {
        if (num == 5)
        {        
            printf("the number is 5\n");
        }
        if (num > 5)
        {
            printf("the number is bigger than 5\n");
        }
    }

    int num01 = 5;
    switch(num01)
    {
        case 1:
            printf("the num is 1\n");
            break;
        case 2:
            printf("the num is 2\n");
            break;
        case 3:
            printf("the num is 3\n");
            break;
        case 4:
            printf("the num is 4\n");
            break;
        default:
            printf("the num is bigger than 5\n");
            break;
    }

    char ch = 'A';  

    switch (ch)

    {

        case 'a':

        case 'A':

            printf("이 학생의 학점은 A입니다.\n");

            break;

        case 'b':

        case 'B':

            printf("이 학생의 학점은 B입니다.\n");

            break;

        case 'c':

        case 'C':

            printf("이 학생의 학점은 C입니다.\n");

            break;

        case 'd':

        case 'D':

            printf("이 학생의 학점은 D입니다.\n");

            break;

        case 'f':

        case 'F':

            printf("이 학생의 학점은 F입니다.\n");

            break;

        default:

            printf("학점을 정확히 입력해 주세요!(A, B, C, D, F)");

            break;

    }
}   