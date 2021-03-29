#include <stdio.h>

union gy
{
    int a;
    char b;
    short c;
};

int main()
{
    union gy g;
    printf("%ld\n", sizeof(g));
    return 0;
}

