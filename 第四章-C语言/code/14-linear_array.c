#include <stdio.h>
#include <stdbool.h>

int main()
{
    int array[] = {1, 3, 2, 6, 10, 9, 7, 12, 0, 13, 32, 41};
    long int n = sizeof(array)/sizeof(array[0]);
    bool exchange;
    exchange = true;
    printf("当前数组为: ");
    for(int k = 0; k < n; k++)
    {
        printf("%d ", array[k]);
    }
    printf("\n");
    int i = 0;
    while(exchange && i < n-1)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(array[j] > array[j+1])
            {
                int tmp;
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                exchange = false;
            }
        }
        if(!exchange)
        {
            exchange = true;
        }
        i++;
    }
    printf("交换后的数组: ");
    for(int k = 0; k < n; k++)
    {
        printf("%d ", array[k]);
    }
    printf("\n");
    
    return 0;
}

