#include <stdio.h>
#include <ctype.h>

int main()
{
    int ch;
    printf("请输入字符:");
    while ((ch = getchar()) != EOF)
    {
        getchar();
        if (isalpha(ch))
        {
            printf("\n输入字符是字母\n");

            if(isupper(ch))
            {
                printf("upper: %c\n", ch);
                printf("转为小写: %c\n", tolower(ch));
            }
            else
            {
                printf("lower: %c\n", ch);
                printf("转为大写: %c\n", toupper(ch));
            }
        }
        else
        {
            printf("输入的不是字母:\n");
            printf("输入字符是: %c\n", ch);
        }
        printf("\n请输入字符: ");
    }
    return 0;
}

