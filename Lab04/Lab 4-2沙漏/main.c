#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, high, a=0, b, z;
    int c, d;


    printf("請輸入高度(偶數): ");
    scanf("%d", &high);

    z=high-4;

    for(j=1 ; j<=high/2 ; j++)
    {
        for(i=0 ; i<a ; i++)
        {
            printf(" ");
        }
        a++;

        if(j==1)
        {
            for(i=1 ; i<=high ; i++)
            {
                printf("*");
            }
            printf("\n");
        }

        if(j>=2)
        {
            printf("*");
            for(b=1 ; b<=z ; b++)
            {
                printf(" ");

            }
            printf("*");
            printf("\n");
        z-=2;
        }



    }

    c=(high-2)/2;
    d=0;


    for(j=high/2+1 ; j<=high ; j++)
    {
        for(i=1 ; i<=c ; i++)
        {
            printf(" ");
        }
        c--;

            printf("*");
            for(i=0 ; i<d; i++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
            d+=2;

        if(j==high)
        {
            for(i=1 ; i<=high ; i++)
            {
                printf("*");
            }

        }



    }


    return 0;
}
