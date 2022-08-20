#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, high, a=0, b, c, d, e;

    printf("請輸入高度(奇數): ");
    scanf("%d", &high);

    b=high-1;
    for(j=1 ; j<=(high+1)/2 ; j++)
    {
        for(i=0 ; i<a ; i++)
        {
            printf(" ");
        }
        a++;

        printf("*");
        for(i=1 ; i<=b ; i++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
        b-=2;
    }

    c=(high+1-4)/2;// 中間下一行起始空格
    d=2;
    for(j=high/2+2 ; j<=high ; j++)
    {
        for(i=1 ; i<=c ; i++)
        {
            printf(" ");
        }
        c--;

        printf("*");
        for(i=1 ; i<=d ; i++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
        d+=2;


    }


    return 0;
}
