#include <stdio.h>

int main()
{
    int double_array[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            double_array[i][j] = 1;
        }
    }

    for (int i = 1; i < 10; i++)
    {
        for(int j = 1; j < i; j++)
        {
            double_array[i][j] = double_array[i-1][j] + double_array[i-1][j-1];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%-8d", double_array[i][j]);
        }
        printf("\n");
    }


    return 0;
}

