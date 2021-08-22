#include <stdio.h>
void local(void);
void staticLocal(void);

int main(void)
{
    int i;

    for (i=0; i<3; i++)
    {
        local();
        staticLocal();
    }
    return 0;
}

void local(void)
{
    int var = 1;
    printf("the loop of local var is executed for the %d time\n", var);
    var++;
}

void staticLocal(void)
{
    static int static_var = 1;
    printf("the loop of staticLocal var is executed for the %d time\n", static_var);
    static_var++;
}