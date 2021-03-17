#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    double final[100];

    int salary,family,interest,mill,clothes,education,totalincome=0,totalcost=0,finalstate1,finalstate2,moon;
    int startday,finishday,age,m1,m2,y1,y2,h;
    char str;

    printf("\n\n                <<<<WELCOME TO SAVING MANAGER profile>>>>\n\n");

    printf("\n1 : To continue.\n");
    scanf("%d",&h);

    if(h==1){
    printf("\nFill your profile information : \n");
    printf("Name : ");
    scanf("%s",&str);

    printf("Age  : ");
    scanf("%d",&age);
    printf("------------------------------------------------------------------------------\n");

    printf("\nEnter your First date for the account to save : ");
    scanf("%d %d %d",&startday,&m1,&y1);
    printf("\nEnter your last date for the account : ");
    scanf("%d %d %d",&finishday,&m2,&y2);

    int i;
    printf("................................................................................\n");
    for(i=startday;i<=finishday;i++)
    {
        printf("\nPlease enter the %d-%d-%d date income\n",i,m1,y1);
        {
            printf("\nIncome from salary : ");
            scanf("%d",&salary);
            printf("income from family : ");
            scanf("%d",&family);
            printf("Income from interest : ");
            scanf("%d",&interest);
            totalincome=totalincome+(salary+family+interest);
        }
        printf("\n...............................................................................\n");
        printf("\nPlease enter the %d-%d-%d date cost\n",i,m2,y2);
        {
            printf("\nCost in mill : ");
            scanf("%d",&mill);
            printf("Cost in clothes : ");
            scanf("%d",&clothes);
            printf("Cost in education : ");
            scanf("%d",&education);
            totalcost=totalcost+(mill+clothes+education);
        }
        printf("....................................................................................\n");
    }
    if(totalincome>totalcost){
    finalstate1=totalincome-totalcost;
    printf("Save money = %d\n",finalstate1);
    }
    else if(totalincome<totalcost){
       finalstate2=totalcost-totalincome;
       printf("Extra cost = %d\n",finalstate2);
        }
    }
    else
        printf("You enter wrong key word. \n");

       return 0;
    }


