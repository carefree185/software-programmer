#include <stdio.h>
int sum_array(int array[], int n);

int main()
{
    int a[] = {1, 3, 5, 3, 9, 10};
    int sum;
    sum = sum_array(a, sizeof(a)/sizeof(a[0]));
    printf("数组a求和: %d\n", sum);
    return 0;
}

int sum_array(int array[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    return sum;
}

