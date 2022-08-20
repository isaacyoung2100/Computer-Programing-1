#include <stdio.h>
#include <stdlib.h>

float power(int);

int main()
{
    int k;
    float ans;

    printf("計算3.5的k次方,請輸入k=");
    scanf("%d", &k);

    ans=power(k);

    printf("3.5的%d次方=%f", k, ans);
    return 0;
}

float power(int k)
{
    int  i;
    float original=3.5;
    for(i=1 ; i<k ; i++)
    {
        original=original*3.5;
    }

    return original;
}
