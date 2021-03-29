#include <stdio.h>

int main()
{
    char ch[] = {'H', 'e', 'l', 'l', 'o'};
    char *p_ch = ch;
    printf("%c\n",*(p_ch+1));
    for (int i = 0; i < sizeof(ch) / sizeof(ch[0]); i++)
    {
        printf("%-3c", *p_ch++);
    }
    printf("\n");

    return 0;
}

