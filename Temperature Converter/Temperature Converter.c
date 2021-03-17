#include<stdio.h>
#include<math.h>
#include<string.h>
void Temperature(void)
{
    double F,C,K;
    int choice;

    printf("1 : C ~~~ > K\n2 : C ~~~ > F\n3 : F ~~~ > K\n4 : F ~~~ > C\n5 : K ~~~ > C\n6 : K ~~~ > F.\n");

    printf("Enter your choice :");
    scanf("%d",&choice);

    if(choice==1){
    printf("\nEnter Temperature in C  :");
    scanf("%lf",&C);

    K = C + 273.16 ;

    printf("\nTemperature in Kelvin is %.3lf\n",K);
    }
    if(choice==2){
       printf("\nEnter Temperature in C  :");
       scanf("%lf",&C);

       F = (9*C)/5+32;

       printf("\nTemperature in Farenhide is %.3lf\n",F);
    }
    else if(choice==3){
         printf("Enter the temperature in farenhide:");
         scanf("%lf",&F);
         K=(5*(F-32))/9.0 + 273;
         printf("The temperature in kelvin is %.2lf\n",K);
    }
    else if(choice==4){
        printf("Enter the temperature in fahrenheit:");
        scanf("%lf",&F);
        C=(5*(F-32))/9.0;
        printf("The temperature in celsius is %.2lf\n",C);
    }
    else if(choice==5){
        printf("Enter the temperature in kelvin:");
        scanf("%lf",&K);
        C=K-273.0;
        printf("The temperature in celsius is %.2lf\n",C);
    }
    else if(choice==6){
        printf("Enter the temperature in kelvin:");
        scanf("%lf",&K);
        F=(9*K+9*273)/5.0 + 32;
        printf("The temperature in fahrenheit is %.2lf\n",F);
    }
}

int main()
{
    int choice;
    printf("\n\n             *************WELLCOME TO MY CONVERTER****************\n\n");
    printf("Press 1 to continue : ");
    scanf("%d",&choice);

    if(choice==1)
    {
        Temperature();
    }

    else
        printf("You enter wrong keyword.\n\n");
 return 0;
}

