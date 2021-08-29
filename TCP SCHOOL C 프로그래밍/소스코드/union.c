#include <stdio.h>

typedef union 
{
    unsigned char a;
    unsigned short b;
    unsigned int c;

} SHAREDATA;

void main(void)
{
    SHAREDATA shareData;
    SHAREDATA* ptr_shareData = &shareData;
    ptr_shareData -> c = 0x12345678;

    printf("%x\n", shareData.a);
    printf("%x\n", shareData.b);
    printf("%x\n", shareData.c);
}