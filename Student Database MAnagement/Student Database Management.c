#include<stdio.h>
#include<string.h>
typedef struct
{
    int day;
    int month;
    int year;
} date;

typedef struct person
{
    char name[20];
    date birthday;
    int sid;
} emprec;
emprec record[10];
int n;
void main()
{
    int i,flag=1;
    void printout();
    int readin();
    void sortalpha();
    void sortage();
    void sortsid();
    n=readin();
    while(flag)
    {
        printf("\n1: sort bye name");
        printf("\n2: sort by age");
        printf("\n3: sort by SID");
        printf("\n4:quit");
        printf("\nENTER YOUR CHOICE:---\n");
        scanf("%d",&i);
        switch(i)
        {
            case 1: sortalpha();
            printout();
            break;
            case 2: sortage();
            printout();
            break;
            case 3: sortsid();
            printout();
            break;
            case 4: flag = 0;
            break;
            default: flag = 0;
            break;
        }; ///end of switch
    }///end of while
} ///end of main

///print the entire array of structures pausing after each structure

void printout()
{
    int i;
    char buf[ 2 ];
    for (i=1;i<=n;i++)
    {
        printf("\nStudent  number %d\n",i);
        printf("NAME\tSID\tBIRTHDAY\n");
        printf("%s\t%d\t%2d:%2d:%4d\n\n",record[i].name,record[i].sid,record[i].birthday.day,record[i].birthday.month,record[i].birthday.year);


    }
    printf("\nHIT ENTER TO CONTINUE.....\n");
    gets(buf);
}
///read in the given number of structures
int readin()
{
    int i,n;
    printf("Enter  the total number of Students \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        printf("\n\nEnter Student %d the name: \n",i);
        scanf("%s",record[i].name);
         printf("\nEnter Student %d the Birth day: \n",i);

        scanf("%d",&record[i].birthday.day);
         printf("\nEnter Student %d the Birth Month: \n",i);
        scanf("%d",&record[i].birthday.month);
         printf("\nEnter Student %d the Birth year: \n",i);
        scanf("%d",&record[i].birthday.year);
        printf("\nEnter Student %d the SID \n",i);
        scanf("%d",&record[i].sid);
    }
    return (n);
}
///sort the array of structures with the employee name as the key

void sortalpha()
{
    int i,j;
    emprec temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(record[j].name,record[j+1].name)>0)
            {
                temp=record[j];
                record[j]=record[j+1];
                record[j+1]=temp;
            }
        }
    }
}
///sort of the array of structures with the employee age as the key

void sortage()
{
    int i,j;
    emprec temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if((record[j].birthday.year>record[j+1].birthday.year) ||((record[j].birthday.year==record[j+1].birthday.year) &&(record[j].birthday.month>record[j+1].birthday.month ))||((record[j].birthday.year==record[j+1].birthday.year)&&(record[j].birthday.month==record[j+1].birthday.month)&&(record[j].birthday.day>record[j+1].birthday.day)))
               {
                   temp=record[j];
                   record[j]=record[j+1];
                   record[j+1]=temp;
               }///end of if
        }///end of inner for
    }///end of outer for

}///end of sortage
///sort the array of structures with employee salary as the key
void sortsid()
{
    int i,j;
    emprec temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(record[j].sid>record[j+1].sid)
            {
                temp=record[j];
                record[j]=record[j+1];
                record[j+1]=temp;
            }
        }
    }
}

