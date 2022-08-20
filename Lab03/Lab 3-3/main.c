#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    while(year)
    {
    printf("Enter a calender year: ");
    scanf("%d", &year);

    if(year%4000==0)
        printf("%d is not a leap year!\n", year);
    else if(year%400==0)
        printf("%d is a leap year!\n", year);
    else if(year%100==0)
        printf("%d is not a leap year!\n", year);
    else if(year%4==0)
        printf("%d is a leap year!", year);
    if(year==-1) break;
    }

    return 0;
}
