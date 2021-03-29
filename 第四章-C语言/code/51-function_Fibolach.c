#include <stdio.h>

int fibolach(int);

int main()
{
    int n = 0;
    int i = 0;
    printf("输入要求几项斐波拉切数列: ");
    scanf("%d", &n);
    while(i < n)
    {
        printf("第%d项: %d\n",i + 1, fibolach(i));
        i++;
    }
    return 0;
}


int fibolach(int x)
{
    if (x == 0 || x ==1)
    {
        return 1;
    }
    else
    {
        return fibolach(x - 1) + fibolach( x - 2 );
    }
}


