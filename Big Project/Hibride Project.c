#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#define PI 3.14159
void general(void);
void scientific(void);
void age (void);
void convert(void);
void Temperature(void);
void Weight(void);
void Length(void);
float sine(float  x);
float cosine(float x);
float tangent(float x);
float sineh(float x);
float cosineh(float x);
float tangenth(float x);
float logten(float x);
float squareroot(float x);
float exponent(float x);
float power(float x,float y);
int main()
{

    printf("\n\n       This is a simple calculator . Please follow the instruction.\n\n");

    printf("PRESS : \n");
    printf("\na : For general calculation.\nb : Scientific calculation.\nc : For age calculation.\n");
    printf("d : For simple conversion.\n");

    char ch;
    printf("\nEnter your choice : ");
    scanf("%c",&ch);
    printf("...............................................................................\n");
    printf("-------------------------------------------------------------------------------\n");

    if(ch=='a')
    {
        general();
    }
    else if(ch=='b')
    {
        scientific();
    }

    else if(ch=='c')
    {
        age();
    }
    else if(ch=='d')
    {
        convert();
    }

    return 0;
    }
    void general(void)
    {
    int choice; ///Variable for the number the user inputs
    double num1, num2, result; ///Double variables for the user input and output, used double in case the user enters e.g. 14.7

    printf("\n\n>>>>>>  Enter a number from the list below  <<<<<<<\n\n");

    printf("1. Addition\n"); ///Calculator choice, user must enter a value from 1 - 4 for the program to work
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n\n");

    printf("Enter number: "); ///User input for the calculator choice
    scanf("%d", &choice);
    printf("-------------------------------------------------------------------------------\n");
    printf("-------------------------------------------------------------------------------\n");

    printf("\n");

    switch(choice) ///switch statement for choice
    {
    case 1:
        printf("You entered Addition\n\n");

        printf("Enter first number: "); ///User input for first number
        scanf("%lf", &num1);

        printf("Enter second number: "); ///User input for second number
        scanf("%lf", &num2);

        printf("\n");

        result = num1 + num2; ///Addition calculation

        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result); ///Addition output
        break;
    case 2:
        printf("You entered Subtraction\n\n");

        printf("Enter first number: "); ///User input for first number
        scanf("%lf", &num1);

        printf("Enter second number: "); ///User input for second number
        scanf("%lf", &num2);

        printf("\n");

        result = num1 - num2; ///Subtraction calculation

        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result); ///Subtraction output
        break;
    case 3:
        printf("You entered Multiplication\n\n");

        printf("Enter first number: "); ///User input for first number
        scanf("%lf", &num1);

        printf("Enter second number: "); ///User input for second number
        scanf("%lf", &num2);

        printf("\n");

        result = num1 * num2; ///Multiplication calculation

        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result); //Multiplication Output
        break;
    case 4:
        printf("You entered Division\n\n");

        printf("Enter first number: "); ///User input for first number
        scanf("%lf", &num1);

        printf("Enter second number: "); ///User input for first number
        scanf("%lf", &num2);

        printf("\n");

        result = num1 / num2; ///Division calculation

        printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
        break;
    default:
        printf("Enter correct number e.g 1 - 4\n"); ///Outputted if the user enters a value other than 1 - 4
        break;
        }
    }
    ///It is the definition of scientific calculator
    void scientific(void)
    {
    float x,y,answer;
    int n;
    printf("What do you want to do?\n");
    printf("1.sin        2.cos \n3.tan        4.sin^-1 \n5.cos^-1     6.tan^-1 \n");
    printf("7.1og10      8.square root. \n9.exponent   10.power.\n");
    printf("Enter your choice : ");
    scanf ("%d",&n);
    printf("------------------------------------------------------------------------------\n");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");

    if (n<9 && n>0)
    {
        printf("\n What is x? ");
        scanf("%f",&x);
        switch (n)
        {
            case 1: answer = sine(x);       break;
            case 2: answer = cosine(x);     break;
            case 3: answer = tangent(x);    break;
            case 4: answer = sineh(x);      break;
            case 5: answer = cosineh(x);    break;
            case 6: answer = tangenth(x);   break;
            case 7: answer = logten(x);     break;
            case 8: answer = squareroot(x); break;
            case 9: answer = exponent(x);   break;
        }
    }
    if (n==10)
    {
        printf("What is x and y?\n");
        scanf("%f%f",&x,&y);
        answer = power(x,y);
    }
    if (n>0 && n<11)
        printf("%f",answer);

    }
        float sine(float x)
    {
        return (sin (x*PI/180));
    }
        float cosine(float x)
    {
        return (cos (x*PI/180));
    }
        float tangent(float x)
    {
        return (tan(x*PI/180));
    }
        float sineh(float x)
    {
        return (1/sin(x*PI/180));
    }
        float cosineh(float x)
    {
        return (1/cos(x*PI/180));
    }
        float tangenth(float x)
    {
        return (1/tan(x*PI/180));
    }
        float logten(float x)
    {
        return (log10(x));
    }
        float squareroot(float x)
    {
        return (sqrt(x));
    }
        float exponent(float x)
    {
        return(exp(x));
    }
        float power(float x, float y)
    {
        return (pow(x,y));
    }
    ///It is the definition of age calculator.
    void age (void)
    {
    char ch;
    int i;

    printf("\n\n        ********<<<<<***** WELLCOME TO MY AGE CALCULATORE *****>>>>>********\n\n\n");



    int pd,pm,py,bd,bm,by,D,M,Y;            /// pd = present date      pm = present month    PY = present year
                                           ///  BD = birth date        BM = birth month      BY = birth year
                                          ///   D = age in date         M = age in month      Y = age in year

    printf("\n\n  Present date---like ( day - month - year ) : ");
    scanf("%d %d %d",&pd,&pm,&py);

    printf("\n  Birth date of the person is                : ");
    scanf("%d %d %d",&bd,&bm,&by);

    if(pd>=bd&&pm>=bm){
        D=pd-bd; M=pm-bm; Y=py-by;
    }
    else if(pd<bd&&pm<bm&&bm==1||bm==3||bm==5||bm==7||bm==8||bm==10||bm==12){
        pd=pd+31;
        pm=pm+12;
        bm=bm+1;
        by=by+1;
        D=pd-bd; M=pm-bm; Y=py-by;
    }
    else if(pd<bd&&pm<bm&&bm==4||bm==6||bm==9||bm==11){
        pd=pd+30;
        pm=pm+12;
        bm=bm+1;
        by=by+1;
        D=pd-bd; M=pm-bm; Y=py-by;
    }
    else if(pd<bd&&pm<bm&bm==2&&by%4==0){
        pd=pd+29;
        pm=pm+12;
        bm=bm+1;
        by=by+1;
        D=pd-bd; M=pm-bm; Y=py-by;
    }
    else if(pd<bd&&pm<bm&bm==2&&by%4!=0){
        pd=pd+28;
        pm=pm+12;
        bm=bm+1;
        by=by+1;
        D=pd-bd; M=pm-bm; Y=py-by;
    }
        else if(pd<bd&&pm>bm&&bm==1||bm==3||bm==5||bm==7||bm==8||bm==10||bm==12){
        pd=pd+31;
        bm=bm+1;
        D=pd-bd; M=pm-bm; Y=py-by;
    }
    else if(pd<bd&&pm>bm&&bm==4||bm==6||bm==9||bm==11){
        pd=pd+30;
        bm=bm+1;
        D=pd-bd; M=pm-bm; Y=py-by;
    }
    else if(pd<bd&&pm>bm&bm==2&&by%4==0){
        pd=pd+29;
        bm=bm+1;
        D=pd-bd; M=pm-bm; Y=py-by;
    }
    else if(pd<bd&&pm>bm&&bm==2&&by%4!=0){
        pd=pd+28;
        bm=bm+1;
        D=pd-bd; M=pm-bm; Y=py-by;
    }
    else if(pd>bd&&pm<=bm){
        pm=pm+12;
        by=by+1;
        D=pd-bd; M=pm-bm; Y=py-by;
    }
    if(D>=30){
        D=D%30; M=M+1;
    }
    if(M>=12){
        M=M%12; Y=Y+1;
    }

    printf("\n\n       Age of the person is %d year %d month %d days\n\n",Y,M,D);

        printf("\n\n\t\tTHANK YOU FOR YOUR CALCULATION\n\n");
    }
    ///It is the definition for converter.
    void convert(void)
    {
            int choice;
    printf("\n\n             *************WELLCOME TO MY CONVERTER****************\n\n");
    printf(" 1 : Temperature\n 2 : Weight\n 3 : Length\n\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    if(choice==1)
    {
        Temperature();
    }
    if(choice==2)
    {
        Weight();
    }
    if(choice==3)
    {
        Length();
    }
    }
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
void Weight(void)
{
    double mg,g,kg;
    int n;

    printf("1 : mg ~~~ g\n2 : mg ~~~ kg\n3 : g  ~~~ kg\n4 : g  ~~~ mg\n5 : kg ~~~ g\n6 : kg ~~~ mg\n");

    printf("Enter your choice : ");
    scanf("%d",&n);

    if(n==1)
    {
        printf("Enter the value in Milligram:");
        scanf("%lf",&mg);
        g=mg/1000.0;
        printf("The value in gram is %.2lf\n",g);
    }
    else if(n==2)
    {
        printf("Enter the value in Milligram:");
        scanf("%lf",&mg);
        kg=mg/1000000.0;
        printf("The value in kilogram is %.2lf\n",kg);
    }
    else if(n==3)
    {
        printf("Enter the value in gram:");
        scanf("%lf",&g);
        kg=g/1000.0;
        printf("The value in Kilogram is %.2lf\n",kg);
    }
    else if(n==4)
    {
        printf("Enter the value in gram:");
        scanf("%lf",&g);
        mg=g*1000.0;
        printf("The value in Milligram is %.2lf\n",mg);
    }
    else if(n==5)
    {
        printf("Enter the value in kilogram:");
        scanf("%lf",&kg);
        g=kg*1000.0;
        printf("The value in gram is %.2lf\n",g);
    }
    else if(n==6)
    {
        printf("Enter the value in kilogram:");
        scanf("%lf",&kg);
        mg=kg*1000000.0;
        printf("The value in miligram is %.2lf\n",mg);
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
        m=mm/1000.0;
        printf("The value in meter is %lf\n",m);
    }
    else if(n==3)
    {
        printf("Enter the value in Millimeter:");
        scanf("%lf",&mm);
        km=mm/1000000.0;
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
        km=cm/100000.0;
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


