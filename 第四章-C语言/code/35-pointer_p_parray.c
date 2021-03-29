#include <stdio.h>
#include <string.h>

int main()
{
    char str[][20] = {"Follow me","BASIC","Great Wall","FORTRAN","Computer desighn"};
    char *name[] = {str[0], str[1], str[2], str[3], str[4]};
    char **p = name;
    
    printf("name = %p p = %p\n", name, p);
    printf("name+1 = %p, p+1 = %p\n", name+1, p+1);
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < strlen(*(p+i)); j++)
        {
            printf("%c", *(*(p+i)+j));  // *(p[i] + j)  *(*(name+i)+j)
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%s\n", *p);
        p++; 
    }
    printf("\n");
    return 0;
}

