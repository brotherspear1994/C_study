#include <stdio.h>

int calcProperty(int, int);

typedef struct 
{
    int savings;
    int loan;
} PROP;


typedef struct
{
    PROP test_prop;
    char name [30];
    int age;
} structOf;


int main(void)
{
    int result;
    PROP chang_prop = {40000, 10000};

    result = calcProperty(chang_prop.savings, chang_prop.loan);
    printf("fuck: %d\n", result);

    structOf testStruct = {
        {500000, 100000},
        "장마담",
        33
    };

    printf("%d, %d, %s, %d\n", testStruct.test_prop.savings, testStruct.test_prop.loan, testStruct.name, testStruct.age);
    

    return 0;
}


int calcProperty(int saving, int loan)
{
    int rtn_value = saving - loan;
    return rtn_value;
}