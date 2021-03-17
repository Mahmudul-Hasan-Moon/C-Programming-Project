#include<stdio.h>
#include<math.h>
int main()
{
    char ch;
    int i;

    printf("\n\n        ********<<<<<***** WELLCOME TO MY AGE CALCULATORE *****>>>>>********\n\n\n");

    printf("  If you to calculate please press  a :  ");
    scanf("%c",&ch);

    if(ch=='a'){
            printf("\n\t\tThe calculator is ready to use\n\n");


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
    else
        printf("\n\nYou enter wrong key.\n");

    return 0;
}


