#include <stdio.h>
#include <stdlib.h>

int main()
{
    float score;
    printf("please input score: \n");
    scanf("%f", &score);
    if (score<0 || score>100)
    {
        printf("your input is not in [0, 100]\n");
    }

    if (score >= 90)
    {
        printf("A\n");
    }
    else if (score >= 80)
    {
        printf("B\n");
    }
    else if (score >= 70)
    {
        printf("C\n");
    }
    else if (score >= 60)
    {
        printf("D\n");
    }
    else 
    {
        printf("you not pass, please come on!!!\n");
    }

    if (score == 100){
        score = 99;
    }
    switch ((int)((score)/10))
    {
    case 9:
        {
            printf("A\n");
            break;
        }
    case 8:
        {
            printf("B\n");
            break;
        }
    case 7:
        {
            printf("C\n");
            break;
        }
    case 6:
        {
            printf("D\n");
        }
    default:
        {
            printf("you not pass, please come on!!!\n");

        }
    }


    return 0;
}

