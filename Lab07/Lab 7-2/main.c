#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, count;
    float a, b, c, d, e;

    do
    {
        printf("請輸入商品號碼(按-1 結束): ");
        scanf("%d", &num);
        if(num==-1) break;
        printf("請輸入銷售商品數量: ");
        scanf("%d", &count);

        if(num==0||num>5)
        {
            printf("商品號碼輸入錯誤: %d\n", num);
            printf("    銷售商品數量: %d", count);
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



    printf("今日所賣商品所得金額為: %f", a+b+c+d+e);;

    return 0;
}
