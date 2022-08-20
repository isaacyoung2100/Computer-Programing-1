#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, answer, a, b, c, d, e;
    do
    {
    if(num==-1) break;

    printf("Enter a binary number (5 digits maximum ), -1 to end: ");
    scanf("%d", &num);

    a=num/10000;
    b=num/1000-a*10;
    c=num/100-a*100-b*10;
    d=num/10-a*1000-b*100-c*10;
    e=num-a*10000-b*1000-c*100-d*10;

    answer=1*e+2*d+4*c+8*b+16*a;

    printf("The decimal equivalent of %d is %d\n", num, answer);
    }while(num!=-1);


    return 0;
}
