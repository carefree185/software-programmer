#include <stdio.h>

int main()
{
    int *p1;
    long *p2;
    char *p3;
    float *p4;
    printf("sizeof(p1): %ld\tsizeof(p2): %ld\nsizeof(p3): %ld\tsizeof(p4): %ld \n", sizeof(p1), sizeof(p2), sizeof(p3), sizeof(p4));

    return 0;
}

