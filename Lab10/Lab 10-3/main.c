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
            printf("�����y��w�⧹,���z�ȳ~�r��!");
            system("pause");
        }

        printf("\n�Y�����|�� %d �Ӯy�� / �g�ٿ��|�� %d �Ӯy��\n", seat[1], seat[2]);
        printf("\n�q���Y�����п�J 1 ,�q�ʸg�ٿ��п�J 2 : ");
        scanf("%d", &levelchoice);


        if(levelchoice==1)
        {
            if(seat[1]==0)
            {
                printf("\n�Y�����y��w��!�O�_��q�g�ٿ�? (�O �Ы� 1 ) (�_ �Ы� 2 ): ");
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

                    printf("\n�z���y�츹�X�� %d ��\n", k);
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

                printf("\n�z���y�츹�X�� %d ��\n", k);
            }


        }


        else if(levelchoice==2)
        {

            if(seat[2]==0)
            {
                printf("\n�g�ٿ��y��w��!�O�_��q�Y����?(�O �Ы�1)(�_ �Ы�2): ");
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

                    printf("\n�z���y�츹�X�� %d ��\n", k);
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

                printf("\n�z���y�츹�X�� %d ��\n", k);
            }


        }




    printf("\n�z�O�_�n���}�q��t��?(�O �Ы�1)(�_ �Ы�2): ");
    scanf("%d", &leave);

    if(leave==1)    break;

    printf("\n");


    }while(leave==2);



	printf("\n���Z���|���y�츹�X ");
    for( i=1 ; i<=10 ; i++ )
    {
        if(plane[i]==0)
				printf("%d ", i);
    }
    printf("����X!\n");


    return 0;
}

