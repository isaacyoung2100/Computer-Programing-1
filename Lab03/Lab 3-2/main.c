#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, a, b, c, d, e;

    printf("�п�J�@�Ӥ�����: ");
    scanf("%d", &num);

    a=num/10000;
    b=num/1000-a*10;
    c=num/100-a*100-b*10;
    d=num/10-a*1000-b*100-c*10;
    e=num-a*10000-b*1000-c*100-d*10;

    if(a==e&&b==d)
        printf("%d �O�@�Ӱj��", num);
    else
        printf("%d ���O�@�Ӱj��", num);


    return 0;
}
