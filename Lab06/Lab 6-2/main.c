#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, counter, biggest, smallest, total;

    printf("Input data: ");
    scanf("%d", &num);
    biggest=num;
    smallest=num;
    total=num;

    for(counter=1 ; counter<=4 ;counter++)
    {
        printf("Input data: ");
        scanf("%d", &num);

        if(num>biggest)
            biggest=num;
        else if(num<smallest)//num<smallest
            smallest=num;

        total=total+num;
    }

    printf("The biggest data is %d\n", biggest);
    printf("The smallest data is %d\n", smallest);
    printf("The average of datas is %d\n", total/5);
    return 0;
}
