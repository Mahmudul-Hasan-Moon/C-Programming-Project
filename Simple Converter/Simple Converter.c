#include<stdio.h>
#include<math.h>
#include<string.h>

void memory(void){

    int ch;
    float bit,byte,kilobyte,megabyte,gegabyte,terabyte;

    printf("1 : bit to byte\n2 : byte to kilobyte\n3 : kb to mb\n4 : mb to gb\n5 : gb to tb\n");
    printf("\nEnter choice : ");
    scanf("%d",&ch);

    if(ch==1){
    printf("Enter the value in bit:");
    scanf("%f",&bit);
    byte=bit/8;
    printf("The conversion of bit to byte is:");
    printf("%.2f\n",byte);
    }
    else if(ch==2){
    printf("Enter the value in byte:");
    scanf("%f",&byte);
    kilobyte=byte/1024;
    printf("The conversion of byte to kilobyte is:");
    printf("%.2f\n",kilobyte);
    }
    else if(ch==3){
    printf("Enter the value in kb:");
    scanf("%f",&kilobyte);
    megabyte=kilobyte/1024;
    printf("The conversion of kilobyte to megabyte is:");
    printf("%.2f\n",megabyte);
    }
    else if(ch==4){
    printf("Enter the value in mb :");
    scanf("%f",&megabyte);
    gegabyte=megabyte/1024;
    printf("The conversion of megabyte to gegabyte is:");
    printf("%.2f\n",gegabyte);
    }
    else if(ch==5){
    printf("Enter the value in gb:");
    scanf("%f",&gegabyte);
    terabyte=gegabyte/1024;
    printf("T.2he conversion of gegabyte to terabyte is:");
    printf("%f\n",terabyte);
    }
}
void Length(void)
{
    double mm,cm,m,km;
    int n;

    printf("1  : mm to cm\n2  : mm to m \n3  : mm to km\n4  : cm to mm\n5  : cm to m\n6  : cm to km\n");
    printf("7  : m  to mm\n8  : m  to cm\n9  : m  to km\n10 : km to mm\n11 : km to cm\n12 : km to m\n");

    printf("Enter choice : ");
    scanf("%d",&n);

    if(n==1)
    {
        printf("Enter the value in Millimeter:");
        scanf("%lf",&mm);
        cm=mm/10.0;
        printf("The value in Centimeter is %lf\n",cm);
    }
    else if(n==2)
    {
        printf("Enter the value in Millimeter:");
        scanf("%lf",&mm);
        cm=mm/1000.0;
        printf("The value in meter is %lf\n",cm);
    }
    else if(n==3)
    {
        printf("Enter the value in Millimeter:");
        scanf("%lf",&mm);
        km=mm/100000.0;
        printf("The value in Kilometer is %lf\n",km);
    }
    else if(n==4)
    {
        printf("Enter the value in Centimeter:");
        scanf("%lf",&cm);
        mm=cm*10.0;
        printf("The value in Millimeter is %lf\n",mm);
    }
    else if(n==5)
    {
        printf("Enter the value in Centimeter:");
        scanf("%lf",&cm);
        m=cm/100.0;
        printf("The value in meter is %lf\n",m);
    }
    else if(n==6)
    {
        printf("Enter the value in Centimeter:");
        scanf("%lf",&cm);
        km=cm/1000.0;
        printf("The value in Kilometer is %lf\n",km);
    }
    else if(n==7)
    {
        printf("Enter the value in meter:");
        scanf("%lf",&m);
        mm=m*1000.0;
        printf("The value in Millimeter is %lf\n",mm);
    }
    else if(n==8)
    {
        printf("Enter the value in meter:");
        scanf("%lf",&m);
        cm=m*100.0;
        printf("The value in Centimeter is %lf\n",cm);
    }
    else if(n==9)
    {
        printf("Enter the value in meter:");
        scanf("%lf",&m);
        km=m/1000.0;
        printf("The value in Kilometer is %lf\n",km);
    }
    else if(n==10)
    {
        printf("Enter the value in Kilometer:");
        scanf("%lf",&km);
        mm=km*1000000.0;
        printf("The value in Millimeter is %lf\n",mm);
    }
    else if(n==11)
    {
        printf("Enter the value in Kilometer:");
        scanf("%lf",&km);
        cm=km*100000.0;
        printf("The value in Centimeter is %lf\n",cm);
    }
    else if(n==12)
    {
        printf("Enter the value in Kilometer:");
        scanf("%lf",&km);
        m=km*1000.0;
        printf("The value in meter is %lf\n",m);
    }
}
int main()
{
    int choice;
    printf("\n\n             *************WELLCOME TO MY CONVERTER****************\n\n");
    printf(" 1 : Memory conversion\n 2 : Length\n\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    if(choice==1)
    {
        memory();
    }
    if(choice==2)
    {
        Length();
    }
    else
        printf("You enter wrong keyword.\n\n");

 return 0;
}

