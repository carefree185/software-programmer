#include <stdio.h>

int main()
{
    int hundred, ten, unit;
    int st = 100;
    do
    {
        hundred = st / 100;
        ten = (st / 10) % 10;
        unit = st % 10;
        if(hundred * hundred * hundred + ten * ten * ten + unit * unit * unit == st)
        {
            printf("%d 是水仙花数\n", st);
        }
    }while(st++ < 999);
    return 0;
}

