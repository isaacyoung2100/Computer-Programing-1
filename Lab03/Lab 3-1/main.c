#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    printf("請輸入x座標: ");
    scanf("%f", &x);
    printf("請輸入y座標: ");
    scanf("%f", &y);

    if(x==0)
        printf("點(x,y)在y軸上");
     else if(y==0)
        printf("點(x,y)在x軸上");
    else if(x>0&&y>0)
        printf("點(x,y)在第一象限");
    else if(x<0&&y>0)
        printf("點(x,y)在第二象限");
    else if(x<0&&y<0)
        printf("點(x,y)在第三象限");
    else if(x>0&&y<0)
        printf("點(x,y)在第四象限");
    return 0;
}
