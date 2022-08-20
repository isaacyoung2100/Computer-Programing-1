#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, high, a=0;

    printf("請輸入高度(偶數): ");
    scanf("%d", &high);

    int b=high-1;

    for(j=1 ; j<=high/2 ; j++)
    {

        for(j=0 ; j<=a ; j++)
        {
            printf(" ");
        }

        for(i=1 ; i<=b ; i++)
        {
            printf("*");
        }
        printf("\n");
        a++;
        b-=2;
    }

    return 0;
}
