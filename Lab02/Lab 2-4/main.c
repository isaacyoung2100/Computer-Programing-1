#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integer, a, b, c, d, number;

    printf("Enter a four-digit encrypted number: ");
    scanf("%d", &integer);
    a=integer/1000;
    b=integer/100-a*10;
    c=integer/10-a*100-b*10;
    d=integer-a*1000-b*100-c*10;

    a=(a+3)%10;
    b=(b+3)%10;
    c=(c+3)%10;
    d=(d+3)%10;
    number=a*10+c*1000+b+d*100;
    printf("Decrypted number is: %d", number);
    return 0;
}
