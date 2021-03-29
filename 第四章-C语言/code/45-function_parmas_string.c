#include <stdio.h>
#include <ctype.h>

void exchange_alpha(char (*s)[10], int n);

int main()
{
    char str[][10] = {"Apple", "Pear", "hello"};
    int n = sizeof(str)/sizeof(str[0]);
    exchange_alpha(str, n);
    for(int i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}


void exchange_alpha(char (*s)[10], int n)
{
    int i = 0;
    while(i < n)
    {
        for(int j = 0; j < 10; j++)
        {
           if(isalpha(*(*(s+i)+j)))
           {
               if(isupper(*(*(s+i)+j)))
               {
                   *(*(s+i)+j) = tolower(*(*(s+i)+j));
               }
               else
               {
                   *(*(s+i)+j) = toupper(*(*(s+i)+j));
               }
           }
        }     
        i++;
    }
}


