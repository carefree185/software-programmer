#include <stdio.h>

int main()
{
    char ch;
    printf("sizeof(char) = %ld\n", sizeof(ch));
    ch = -128;
    ch = ch - 1;  // ch 在-128~127之间取值，ch = -128 - 1越过-128到127。所以ch - 1 = 127
    printf("ch = %d\n", ch);

    return 0;
}

