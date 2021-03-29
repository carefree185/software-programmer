#include <stdio.h>

int main()
{
    int a[3][3] = {{1 ,3, 5}, {2, 4, 6},{7, 8, 9}};
    int *p[3] = {a[0], a[1], a[2]};  // 指针数组, 里面由p[0] p[1] p[2]三个元素, 每个元素都是整型指针
    // 通过指针数组遍历二维数组
    int i = 0;
    int sum = 0;
    while (i < 3)
    {
        int j = 0;
        while (j < 3)
        {
            sum += *(*(p+i) + j);
            printf("%5d", *(*(p+i) + j));
            j++;
        }
        printf("\n");
        i++;
    }
    printf("数组元素的和: %d\n", sum);
    
    return 0;
}

