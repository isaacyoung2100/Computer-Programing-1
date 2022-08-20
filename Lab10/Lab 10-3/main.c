#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int plane[11]={0};
    int seat[3]={5,5,5};
    int levelchoice;
    int leave;
    int k, i;
    int full;

    srand(time(NULL));

    do
    {

        if(seat[1]==0&&seat[2]==0)
        {
            printf("本機座位已售完,祝您旅途愉快!");
            system("pause");
        }

        printf("\n頭等艙尚有 %d 個座位 / 經濟艙尚有 %d 個座位\n", seat[1], seat[2]);
        printf("\n訂購頭等艙請輸入 1 ,訂購經濟艙請輸入 2 : ");
        scanf("%d", &levelchoice);


        if(levelchoice==1)
        {
            if(seat[1]==0)
            {
                printf("\n頭等艙座位已滿!是否改訂經濟艙? (是 請按 1 ) (否 請按 2 ): ");
                scanf("%d", &full);
                printf("\n");

                if(full==1)
                {

                    do
                    {
                        k=6+(rand()%5);

                    }while(plane[k]==1);

                    plane[k]=1;
                    seat[2]-=1;

                    printf("\n您的座位號碼為 %d 號\n", k);
                }
                else
                {
                    break;
                }
            }
            else
            {
                do
                {
                    k=1+(rand()%5);

                }while(plane[k]==1);

                plane[k]=1;
                seat[1]-=1;

                printf("\n您的座位號碼為 %d 號\n", k);
            }


        }


        else if(levelchoice==2)
        {

            if(seat[2]==0)
            {
                printf("\n經濟艙座位已滿!是否改訂頭等艙?(是 請按1)(否 請按2): ");
                scanf("%d", &full);
                printf("\n");

                if(full==1)
                {
                    do
                    {
                        k=1+(rand()%5);
                    }while(plane[k]==1);

                    plane[k]=1;
                    seat[1]-=1;

                    printf("\n您的座位號碼為 %d 號\n", k);
                }
                else
                {
                    break;
                }
            }

            else
            {
                do
                {
                    k=6+(rand()%5);

                }while(plane[k]==1);

                plane[k]=1;
                seat[2]-=1;

                printf("\n您的座位號碼為 %d 號\n", k);
            }


        }




    printf("\n您是否要離開訂位系統?(是 請按1)(否 請按2): ");
    scanf("%d", &leave);

    if(leave==1)    break;

    printf("\n");


    }while(leave==2);



	printf("\n本班機尚有座位號碼 ");
    for( i=1 ; i<=10 ; i++ )
    {
        if(plane[i]==0)
				printf("%d ", i);
    }
    printf("未售出!\n");


    return 0;
}

