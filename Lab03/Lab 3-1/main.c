#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    printf("�п�Jx�y��: ");
    scanf("%f", &x);
    printf("�п�Jy�y��: ");
    scanf("%f", &y);

    if(x==0)
        printf("�I(x,y)�by�b�W");
     else if(y==0)
        printf("�I(x,y)�bx�b�W");
    else if(x>0&&y>0)
        printf("�I(x,y)�b�Ĥ@�H��");
    else if(x<0&&y>0)
        printf("�I(x,y)�b�ĤG�H��");
    else if(x<0&&y<0)
        printf("�I(x,y)�b�ĤT�H��");
    else if(x>0&&y<0)
        printf("�I(x,y)�b�ĥ|�H��");
    return 0;
}
