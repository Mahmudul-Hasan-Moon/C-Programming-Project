

///Name of the project :  CALCULATE INCOME TAX OF GOVERMENT OR NON-GOVERMENT SERVICE HOLDER IN BANGLADESH

#include<stdio.h>
#include<string.h>
add(float x,float y)
{
    float add=0;
    add=x+y;
    return(add);
}
sub(float x,float y)
{
    float sub=0;
    sub=x-y;
    return(sub);
}
mul(float x,float y)
{
    float mul=0;
    mul=x*y;
    return(mul);
}
main()
{
    printf("WELCOME TO CALCULATE INCOME TAX OF GOVERMENT OR NON-GOVERMENT SERVICE HOLDER IN BANGLADESH\n\n");
    printf("please input taxpayer's name and age\n");
    char name[100];
    int age;
    gets(name);
    scanf("%d",&age);
    printf("press  '1' if taxpayer is a male or press '2' if she is female\n");
    int p;
    scanf("%d",&p);
    if(p==1)
        printf("press '3' if he is a govt. employee or press '4' for other job\n");
    else if(p==2)
        printf("press '3' if she is a govt. employee or press '4' for other job\n");
    else printf("worng keyword\n") ;
    int job;
    scanf("%d",&job);
    if(p==1&&job==4)
    {
        float income,p,tincome,tax=0;
        printf("input income per month\n");
        scanf("%f",&income);
        if(income<0)
            printf("you submission is incorrect income cannot be negative\n");
        else
        {
            tincome=mul(income,14);
            if(tincome<=250000)
                printf("He don't need to pay tax\n");
            else if(250000<tincome<=650000)
            {
                tincome=sub(tincome,250000);
                float p,ttax=0;
                ttax=mul(tincome,.1);
                if(ttax<3000)
                    ttax=3000;
                tincome=add(tincome,250000);
                printf("\n\n");
                printf("Information of taxpayer\nName :");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
            else if(650000<tincome<=1150000)
            {
                tincome=sub(tincome,650000);
                float p,tax=0,tax1=0,ttax;
                tax=(400000,.1);
                tax1=(tincome,.15);
                ttax=add(tax,tax1);
                tincome=add(tincome,650000);
                printf("Information of taxpayer\nName :");
                printf("\n\n");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
            else if(1150000<tincome<=1750000)
            {
                tincome=sub(tincome,1150000);
                float p,tax=0,tax1=0,tax2,ttax;
                tax=(400000,.1);
                tax1=(500000,.15);
                ttax=add(tax,tax1);
                tax2=mul(tincome,.2);
                ttax=add(ttax,tax2);
                tincome=add(tincome,1150000);
                printf("\n\n");
                printf("Information of taxpayer\nName :");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
            else if(1750000<tincome<=4750000)
            {
                tincome=sub(tincome,1750000);
                float p,tax=0,tax1=0,tax2,tax3=0,ttax;
                tax=(400000,.1);
                tax1=(500000,.15);
                ttax=add(tax,tax1);
                tax2=mul(600000,.2);
                ttax=add(ttax,tax2);
                tax3=mul(tincome,.25);
                ttax=add(ttax,tax3);
                tincome=add(tincome,1750000);
                printf("\n\n");
                printf("Information of taxpayer\nName :");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
            else if(4750000<tincome)
            {
                tincome=sub(tincome,4750000);
                float p,tax=0,tax1=0,tax2=0,tax3=0,tax4=0,ttax;
                tax=(400000,.1);
                tax1=(500000,.15);
                ttax=add(tax,tax1);
                tax2=mul(600000,.2);
                ttax=add(ttax,tax2);
                tax3=mul(3000000,.25);
                ttax=add(ttax,tax3);
                tax4=mul(tincome,.3);
                ttax=add(ttax,tax4);
                tincome=add(tincome,4750000);
                printf("\n\n");
                printf("Information of taxpayer\nName :");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
        }
    }
    else if(p==2&&job==3)
    {
        float income,p,tincome,tax=0,sincome=0,rmoney=0;
        printf("input income per month\n");
        scanf("%f",&income);
        if(income<0)
            printf("you submission is incorrect income cannot be negative\n");
        else
        {
            tincome=mul(income,14.2);
            sincome=mul(income,1.2);
            rmoney=mul(sincome,.15);
            if(tincome<=300000)
                printf("She don't need to pay tax\n");
            else if(300000<tincome<=700000)
            {
                tincome=sub(tincome,300000);
                float p,ttax=0;
                ttax=mul(tincome,.1);
                ttax=sub(ttax,rmoney);
                if(ttax<3000)
                    ttax=3000;
                tincome=add(tincome,300000);
                printf("\n\n");
                printf("Information of taxpayer\nName :");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
            else if(700000<tincome<=1200000)
            {
                tincome=sub(tincome,700000);
                float p,tax=0,tax1=0,ttax;
                tax=(400000,.1);
                tax1=(tincome,.15);
                ttax=add(tax,tax1);
                ttax=sub(ttax,rmoney);
                tincome=add(tincome,700000);
                printf("\n\n");
                printf("Information of taxpayer\nName :");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
            else if(1200000<tincome<=1800000)
            {
                tincome=sub(tincome,1200000);
                float p,tax=0,tax1=0,tax2,ttax;
                tax=(400000,.1);
                tax1=(500000,.15);
                ttax=add(tax,tax1);
                tax2=mul(tincome,.2);
                ttax=add(ttax,tax2);
                ttax=sub(ttax,rmoney);
                tincome=add(tincome,1200000);
                printf("\n\n");
                printf("Information of taxpayer\nName :");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
            else if(1800000<tincome<=4800000)
            {
                tincome=sub(tincome,1800000);
                float p,tax=0,tax1=0,tax2,tax3=0,ttax;
                tax=(400000,.1);
                tax1=(500000,.15);
                ttax=add(tax,tax1);
                tax2=mul(600000,.2);
                ttax=add(ttax,tax2);
                tax3=mul(tincome,.25);
                ttax=add(ttax,tax3);
                ttax=sub(ttax,rmoney);
                tincome=add(tincome,1800000);
                printf("Information of taxpayer\nName :");
                printf("\n\n");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
            else if(4800000<tincome)
            {
                tincome=sub(tincome,4800000);
                float p,tax=0,tax1=0,tax2=0,tax3=0,tax4=0,ttax;
                tax=(400000,.1);
                tax1=(500000,.15);
                ttax=add(tax,tax1);
                tax2=mul(600000,.2);
                ttax=add(ttax,tax2);
                tax3=mul(3000000,.25);
                ttax=add(ttax,tax3);
                tax4=mul(tincome,.3);
                ttax=add(ttax,tax4);
                ttax=sub(ttax,rmoney);
                tincome=add(tincome,4800000);
                printf("\n\n");
                printf("Information of taxpayer\nName :");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
        }
    }
    else if(p==1&&job==3)
    {
        float income,p,tincome,tax=0,sincome=0,rmoney=0;
        printf("input income per month\n");
        scanf("%f",&income);
        if(income<0)
            printf("you submission is incorrect income cannot be negative\n");
        else
        {
            tincome=mul(income,14.2);
            sincome=mul(income,1.2);
            rmoney=mul(sincome,.15);
            if(tincome<=250000)
                printf("He don't need to pay tax\n");
            else if(250000<tincome<=650000)
            {
                tincome=sub(tincome,250000);
                float p,ttax=0;
                ttax=mul(tincome,.1);
                ttax=sub(ttax,rmoney);
                if(ttax<3000)
                    ttax=3000;
                tincome=add(tincome,250000);
                printf("\n\n");
                printf("Information of taxpayer\nName :");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
            else if(650000<tincome<=1150000)
            {
                tincome=sub(tincome,650000);
                float p,tax=0,tax1=0,ttax;
                tax=(400000,.1);
                tax1=(tincome,.15);
                ttax=add(tax,tax1);
                ttax=sub(ttax,rmoney);
                tincome=add(tincome,650000);
                printf("\n\n");
                printf("Information of taxpayer\nName :");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
            else if(1150000<tincome<=1750000)
            {
                tincome=sub(tincome,1150000);
                float p,tax=0,tax1=0,tax2,ttax;
                tax=(400000,.1);
                tax1=(500000,.15);
                ttax=add(tax,tax1);
                tax2=mul(tincome,.2);
                ttax=add(ttax,tax2);
                ttax=sub(ttax,rmoney);
                tincome=add(tincome,1150000);
                printf("\n\n");
                printf("Information of taxpayer\nName :");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
            else if(1750000<tincome<=4750000)
            {
                tincome=sub(tincome,1750000);
                float p,tax=0,tax1=0,tax2,tax3=0,ttax;
                tax=(400000,.1);
                tax1=(500000,.15);
                ttax=add(tax,tax1);
                tax2=mul(600000,.2);
                ttax=add(ttax,tax2);
                tax3=mul(tincome,.25);
                ttax=add(ttax,tax3);
                ttax=sub(ttax,rmoney);
                tincome=add(tincome,1750000);
                printf("\n\n");
                printf("Information of taxpayer\nName :");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
            else if(4750000<tincome)
            {
                tincome=sub(tincome,4750000);
                float p,tax=0,tax1=0,tax2=0,tax3=0,tax4=0,ttax;
                tax=(400000,.1);
                tax1=(500000,.15);
                ttax=add(tax,tax1);
                tax2=mul(600000,.2);
                ttax=add(ttax,tax2);
                tax3=mul(3000000,.25);
                ttax=add(ttax,tax3);
                tax4=mul(tincome,.3);
                ttax=add(ttax,tax4);
                ttax=sub(ttax,rmoney);
                tincome=add(tincome,4750000);
                printf("\n\n");
                printf("Information of taxpayer\nName :");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
        }
    }
    else if(p==2&&job==4)
    {
        float income,p,tincome,tax=0;
        printf("input income per month\n");
        scanf("%f",&income);
        if(income<0)
            printf("you submission is incorrect income cannot be negative\n");
        else
        {
            tincome=mul(income,14);
            if(tincome<=300000)
                printf("She don't need to pay tax\n");
            else if(300000<tincome<=700000)
            {
                tincome=sub(tincome,300000);
                float p,ttax=0;
                ttax=mul(tincome,.1);
                if(ttax<3000)
                    ttax=3000;
                tincome=add(tincome,300000);
                printf("Information of taxpayer\nName :");
                printf("\n\n");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
            else if(700000<tincome<=1200000)
            {
                tincome=sub(tincome,700000);
                float p,tax=0,tax1=0,ttax;
                tax=(400000,.1);
                tax1=(tincome,.15);
                ttax=add(tax,tax1);
                tincome=add(tincome,700000);
                printf("\n\n");
                printf("Information of taxpayer\nName :");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
            else if(1200000<tincome<=1800000)
            {
                tincome=sub(tincome,1200000);
                float p,tax=0,tax1=0,tax2,ttax;
                tax=(400000,.1);
                tax1=(500000,.15);
                ttax=add(tax,tax1);
                tax2=mul(tincome,.2);
                ttax=add(ttax,tax2);
                tincome=add(tincome,1200000);
                printf("\n\n");
                printf("Information of taxpayer\nName :");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
            else if(1800000<tincome<=4800000)
            {
                tincome=sub(tincome,1800000);
                float p,tax=0,tax1=0,tax2,tax3=0,ttax;
                tax=(400000,.1);
                tax1=(500000,.15);
                ttax=add(tax,tax1);
                tax2=mul(600000,.2);
                ttax=add(ttax,tax2);
                tax3=mul(tincome,.25);
                ttax=add(ttax,tax3);
                tincome=add(tincome,1800000);
                printf("\n\n");
                printf("Information of taxpayer\nName :");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
            else if(4800000<tincome)
            {
                tincome=sub(tincome,4800000);
                float p,tax=0,tax1=0,tax2=0,tax3=0,tax4=0,ttax=0;
                tax=(400000,.1);
                tax1=(500000,.15);
                ttax=add(tax,tax1);
                tax2=mul(600000,.2);
                ttax=add(ttax,tax2);
                tax3=mul(3000000,.25);
                ttax=add(ttax,tax3);
                tax4=mul(tincome,.3);
                ttax=add(ttax,tax4);
                tincome=add(tincome,4800000);
                printf("\n\n");
                printf("Information of taxpayer\nName :");
                puts(name);
                printf("Age  :%d \n",age);
                printf("Total income per year :%.2f\n",tincome);
                printf("Total tax need to paid  :%.2f\n",ttax);
            }
        }
    }
    else printf("your submission is incorrect\n");
    return 0;
}
