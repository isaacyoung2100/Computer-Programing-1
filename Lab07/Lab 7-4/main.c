#include <stdio.h>
#include <stdlib.h>

int main()
{
    float piecenumber, pieceperwage, commissionsales, commissionpay;
    float hourlysalary, hours, workerpay, manangerpay;
    int m=0,h=0,c=0,p=0;
    int type;

    do
    {
        printf("Enter paycode ( -1 to end): ");
        scanf("%d", &type);

    switch(type)
    {
        case 1:
            printf("Manager selected.\n");
            printf("Enter weekly salary: ");
            scanf("%f", &manangerpay);
            printf("The manager's pay is $%.2f\n\n", manangerpay);
            m++;
            break;
        case 2:
            printf("Hourly worker selected.\n");
            printf("Enter the hourly salary: ");
            scanf("%f", &hourlysalary);
            printf("Enter the total  hours worked: ");
            scanf("%f", &hours);
            if(hours>40)
            {
                printf("Worker worked %.0f overtime hours.\n", hours-40);
            }

            if(hours<=40)
                workerpay=hourlysalary*hours;
            else
                workerpay=hourlysalary*40+hourlysalary*1.5*(hours-40);

            printf("Worker's pay is $%.2f\n\n", workerpay);
            h++;
            break;
        case 3:
            printf("Commission worker selected.\n");
            printf("Enter gross weekly sales: ");
            scanf("%f", &commissionsales);
            commissionpay=250+commissionsales*0.057;
            printf("Commission worker's pay is $%.2f\n\n", commissionpay);
            c++;
            break;
        case 4:
            printf("Pieceworker selected.\n");
            printf("Enter number of pieces: ");
            scanf("%f", &piecenumber);
            printf("Enter wage per piece: ");
            scanf("%f", &pieceperwage);
            printf("Pieceworker's pay is $%.2f\n\n", piecenumber*pieceperwage);
            p++;
            break;
        default:
            printf("Invalid pay code.\n\n");
            break;
        case -1:
            break;
    }
    }while(type!=-1);

    printf("Total number of managers paid               : %d\n", m);
    printf("Total number of hourly workers paid         : %d\n", h);
    printf("Total number of commission workers paid     : %d\n", c);
    printf("Total number of pieceworkers paid           : %d", p);
    return 0;
}
