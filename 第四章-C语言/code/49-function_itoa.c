#include <stdio.h>

char * itoa(char *s, int x);

int main()
{
    int num;
    char str[100];
    printf("输入一个整数: ");
    scanf("%d", &num);
    char *ret;
    ret = itoa(str, num);
    printf("%s\n", str);
    printf("%s\n",ret);
    return 0;
}

char *itoa(char *s, int x)
{
    int r, i=0, j;
    while(x)
    {
        r = x % 10;
        x /= 10;
        s[i] = r + '0';
        i++;
    }
    s[i] = '\0';
    j = i - 1; 
    i = 0;
    while(i < j)
    {
        char ch;
        ch = s[i];
        s[i] = s[j];
        s[j] = ch;
        i++;
        j--;
    }
    return s;
}


