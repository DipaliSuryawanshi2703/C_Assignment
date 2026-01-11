#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No[7]= {}, Cnt=0;

    printf("\n Enter Seven Numbers ==> \n");

   for(Cnt=0 ; Cnt<7; Cnt++)
   {
       printf("\n Enter The Number %d = ",Cnt+1);
       scanf("%d",&No[Cnt]);
   }

    system("cls");

     printf("\n The Given Seven Numbers ==> \n");

     for(Cnt=0 ; Cnt<7; Cnt++)
   {
       printf("\n The Given Number %d = %d",Cnt+1,No[Cnt]);

   }
    getch();
    return 0;
}




