#include <stdio.h>

struct book
{
    char title[10];
    int score;
};

struct book* ptr_book;

void main(void)
{
    // struct book my_book = {"홍길동", 100};
    struct book my_book[3] =
    {
        {"국어", 80},
        {"English", 98},
        {"수학", 97}
    };

    ptr_book = &my_book[0];
    
    puts("each name of the subjects are:");
    printf("%s, %d\n", my_book[1].title, my_book[2].score);
    printf("%s, %d\n", (*ptr_book).title, ptr_book -> score);

}