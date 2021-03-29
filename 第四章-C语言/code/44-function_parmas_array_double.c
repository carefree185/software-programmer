#include <stdio.h>

int sum_a(int a[][5],  int n);

int main()
{
    int a[][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
    int sum = 0;
    sum = sum_a(a, sizeof(a)/sizeof(a[0]));
    printf("二维数组元素求和: %d\n", sum);
    return 0;
}

int sum_a(int a[][5], int n)
{
    int sum = 0;
    int i = 0;
    while(i < n)
    {
        for(int j = 0; j < 5; j++)
        {
            sum += *(*(a+i)+j);
        }
        i++;
    }
    
    return sum;
}


