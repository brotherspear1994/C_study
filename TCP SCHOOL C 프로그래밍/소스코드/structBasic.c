#include <stdio.h>

struct book
{
    char title[30];
    char author[30];
    int price;
};

typedef struct
{
    char name[10];
    char sex[5];
    int age;
} person;


int main(void)
{
    struct book my_book = {"for the happiness", "chris gardner", 38000};
    struct book java_book = {.title="kill me plz", .author="homygod", .price=27000};

    printf("my_book: %s, %s, %d\n", my_book.title, my_book.author, my_book.price);
    printf("my_book: %s, %s, %d\n", java_book.title, java_book.author, java_book.price);

    person minsu = {"minsu", "man", 28};
    person yunghe = {.name="yunghe", .sex="girl", .age=30};

    printf("minsu: %s, %s, %d\n", minsu.name, minsu.sex, minsu.age);
    printf("yunghe: %s, %s, %d\n", yunghe.name, yunghe.sex, yunghe.age);
    return 0;
}