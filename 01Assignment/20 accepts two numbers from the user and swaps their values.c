#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 =0, No2 = 0, Temp = 0;

    printf("\n Enter Number 1 = ");
    scanf("%d",&No1);

    printf("\n Enter Number 2 = ");
    scanf("%d",&No2);

    printf("\n=====================================********==============================");

    printf("\n\n Numbers Before Swapping Are Number 1=%d , Number 2 = %d \n\n",No1,No2);

    Temp = No2;
    No2 = No1;
    No1 = Temp;

     printf("\n=====================================********==============================");


    printf("\n\n Numbers Before Swapping Are Number 1=%d , Number 2 = %d",No1,No2);

    getch();
    return 0;
}

