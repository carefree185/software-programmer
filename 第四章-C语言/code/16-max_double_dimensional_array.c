#include <stdio.h>

int main()
{
    int array[3][4] = {{1, 4, 3, 5},{2, 8, 6, 10},{0, 7, 9, 11}};
    int max = array[0][0];
    int max_row = 0;
    int max_col = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
                max_row = i + 1;
                max_col = j + 1;
            }
        }
    }
    printf("array's max is %d\nmax_row = %d\nmax_col = %d\n", max, max_row, max_col);
    return 0;
}

