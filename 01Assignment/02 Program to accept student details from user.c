#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char Name[40] = "\0";
    int RNo = 0;
    char Crs[10] ="\0", City[10] ="\0";

     printf("\n Enter Student Name = ");
     gets(Name);


    fflush(stdin);

    printf("\n Enter Roll No = ");
    scanf("%d",&RNo);


    fflush(stdin);

    printf("\n Enter The Course = ");
    gets(Crs);


    fflush(stdin);

    printf("\n Enter the City = ");
    gets(City);

    system("cls");
    printf("\n Enter Any Key To See Student Details");

    printf("\n Student details =>   ");
    printf("\n ..........................................");
    printf("\n Students Name = %s",Name);
    printf("\n Roll Number = %d",RNo);
    printf("\n Course = %s",Crs);
    printf("\n city = %s ",City);

    getch();
    return 0;


}
