#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, count;
    float a, b, c, d, e;

    do
    {
        printf("�п�J�ӫ~���X(��-1 ����): ");
        scanf("%d", &num);
        if(num==-1) break;
        printf("�п�J�P��ӫ~�ƶq: ");
        scanf("%d", &count);

        if(num==0||num>5)
        {
            printf("�ӫ~���X��J���~: %d\n", num);
            printf("    �P��ӫ~�ƶq: %d", count);
        }

        switch(num)
        {
            case1 :     a=a+2.98*count; break;
            case2 :     b=b+4.50*count; break;
            case3 :     c=c+9.98*count; break;
            case4 :     d=d+4.49*count; break;
            case5 :     e=e+6.87*count; break;
        }


    }while(num!=-1);



    printf("����ҽ�ӫ~�ұo���B��: %f", a+b+c+d+e);;

    return 0;
}
