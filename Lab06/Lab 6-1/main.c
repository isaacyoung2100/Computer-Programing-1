#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1, n, b=1;
    printf("Input a Integer n(<=10): ");
    scanf("%d", &n);

    while(a<=n)
    {
        b=2*b;
        printf("2 ^ %d = %6d\n", a, b);
        a++;
    }
    return 0;
}
