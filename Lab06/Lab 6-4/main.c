#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, i, j;

    do
    {
        printf("Enter the square side, -1 to end: ");
        scanf("%d", &size);

        for(j=1 ; j<=size ; j++)
        {
            if(j==1||j==size)
            {
                for(i=1 ; i<=size ; i++)
                 {
                     printf("*");
                 }
                 printf("\n");
            }


            else
            {
                printf("*");
                for(i=2 ; i<size ;i++)
                {
                    printf(" ");
                }
                printf("*");

                printf("\n");
            }
        }
    }while(size!=-1);
    return 0;
}
