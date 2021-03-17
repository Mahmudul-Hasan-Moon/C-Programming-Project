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
    float salary;
} employee;
employee record[10];
int n;
void main()
{
    int i,flag=1;
    void printout();
    int readin();
    void sortalpha();
    void sortage();
    void sortsal();
    n=readin();
    while(flag)
    {
        printf("\n1: sort by name");
        printf("\n2: sort by age");
        printf("\n3: sort by salary");
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
            case 3: sortsal();
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
    for (i=0;i<n;i++)
    {
        printf("\n\nemployee number %d\n",i+1);
        printf("\nname: %s\n",record[i].name);
        printf("birthdate: %3d:%3d:%3d\n",record[i].birthday.day,record[i].birthday.month,record[i].birthday.year);
        printf("salary : %6.2f\n",record[i].salary);

    }
    printf("\nHIT ENTER TO CONTINUE.....\n");
}
///read in the given number of structures
int readin()
{
    int i,n;
    printf("\nEnter  the number of records \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEmployee number %2d",i+1);
        printf("\n\nenter the name: \n");
        scanf("%s",record[i].name);
        printf("\n\nenter the birthdate: \n");
        printf("enter the day: \n");
        scanf("%d",&record[i].birthday.day);
        printf("enter the month: \n");
        scanf("%d",&record[i].birthday.month);
        printf("enter the year: \n");
        scanf("%d",&record[i].birthday.year);
        printf("enter the salary: \n");
        scanf("%f",&record[i].salary);
    }
    return (n);
}
///sort the array of structures with the employee name as the key

void sortalpha()
{
    int i,j;
    employee temp; ///temporary structure
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
///decending
void sortage()
{
    int i,j;
    employee temp;
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
void sortsal()
{
    int i,j;
    employee temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(record[j].salary>record[j+1].salary)
            {
                temp=record[j];
                record[j]=record[j+1];
                record[j+1]=temp;
            }
        }
    }
}
