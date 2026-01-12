#include<stdio.h>
#include<conio.h>

int main ()
{
    int No1 =0,No2 =0, No3 =0 ,temp = 0;


    printf("\n Enter First Number =  ");
    scanf("%d",&No1);

    printf("\n Enter Second Number =  ");
    scanf("%d",&No2);

    printf("\n Enter Third Number =  ");
    scanf("%d",&No3);

    printf("\n Number Before Swapping = Number 1 = %d, Number 2 = %d ,Number 3 = %d ,\n ",No1 ,No2,No3);
    getch();

    printf("\n********************************************************\n");

    temp = No3;
    No3=No2;
    No2= No1;
    No1=temp;



   printf("\n Number Before Swapping = Number 1 = %d, Number 2 = %d ,Number 3 = %d ,\n ",No1 ,No2,No3);

   printf("\n********************************************************\n");

   printf("\n\t\t Thank You!!!!");


   getch();
   return 0;



}
