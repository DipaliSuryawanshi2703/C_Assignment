#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0;

    printf("\n Enter First Number = ");
    scanf("%d",&No1);
    printf("\n Enetr Second Number = ");
    scanf("%d",&No2);

    if(No1>No2)
       {
        printf("\n First Number Is Maximum Than Second Number.");
        printf("\n Second Number Is minimum Than First Number.");

       }
    else if(No1<No2)
    {
        printf("\n First Number Is Minimum Than Second Number.");
        printf("\n Second Number is Maximum Than First Number.");
    }

    else

         printf("\n Both Numbers Are Equal");



    printf("\n Thank You!!");

    getch();
    return 0;



}
