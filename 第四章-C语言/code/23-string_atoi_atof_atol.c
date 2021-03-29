#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s2i[] = "12";
    printf("%d\n", atoi(s2i));
    char s2l[] = "13";
    printf("%ld\n", atol(s2l));
    char s2ll[] = "14";
    printf("%lld\n", atoll(s2ll));
    char s2f[] = "3.1415";
    printf("%f\n", atof(s2f));
    
    return 0;
}

