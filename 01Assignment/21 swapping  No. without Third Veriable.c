#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0 , No2 = 0 ;

    printf("\n Enter First Number =  ");
    scanf("%d",&No1);

    printf("\n Enter Second Number =  ");
    scanf("%d",&No2);

    printf("\n Number Before Swapping = No1 = %d, No2 = %d ,\n ",No1 ,No2);
    getch();

    printf("\n********************************************************\n");

    No1 = No1 + No2;
    No2 = No1 - No2;
    No1 = No1 - No2;

   printf("\n Number After Swapping = No1 = %d, No2 = %d ,\n ",No1 ,No2);

   printf("\n********************************************************\n");

   printf("\n\t\t Thank You!!!!");


   getch();
   return 0;

}
