#include <stdio.h>

enum WEATHER {SUNNY=10, RANNIY=20, COLD=30, MONSOON=40, SNOW=50};
enum Days {MON, TUE, WED, THU, FRI, SAT, SUN};

int main(void)
{
    enum WEATHER wt = SNOW;

    switch (wt) {
        case SUNNY:
            puts("The Weather is Sunny");
            break;
        case RANNIY:
            puts("God Damn, Its ranin now");
            break;
        case COLD:
            puts("Damin its cold");
            break;
        default:
            puts("Whats the weather then");
            break;
    }

    printf("%d, %d, %d, %d\n", SUNNY, RANNIY, COLD ,MONSOON);

    enum Days Today;
    Today = SUN;

    if (Today >= SAT || Today <= SUN)
    {
        puts("Today is a holiday.!!");
    }
    else
    {
        printf("%d days are left till the weekend\n", 5-Today);
    }
    printf("%d, %d, %d, %d, %d\n", MON, TUE, WED, THU, FRI);
}