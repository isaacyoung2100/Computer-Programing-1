#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=20, b=10 , c;
    printf("a=%d, b=%d\n", a, b);
    a++;
    b=b+5;
    printf("a=%d, b=%d\n", a, b);
    c=(a+b)/2;
    printf("a=%d, b=%d, c=%d\n", a, b, c);
    c=a*a-b*b;
    printf("a=%d, b=%d, c=%d\n", a, b, c);
    return 0;
}
