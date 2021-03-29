#include <stdio.h>

int main()
{
    printf("sizeof(char) = %ld\nsizeof(_Bool) = %ld\nsizeof(short) = %ld\nsizeof(int) = %ld\nsizeof(long) = %ld\nsizeof(long long) = %ld\n",sizeof(char), sizeof(_Bool), sizeof(short), sizeof(int), sizeof(long), sizeof(long long));
    return 0;
}

