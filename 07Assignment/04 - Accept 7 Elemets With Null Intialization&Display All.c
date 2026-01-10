#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{


    int No[7]= {};

    printf("\n Enter Five Numbers ==> \n");

    printf("\n First Number = ");
    scanf("%d",&No[0]);
    printf("\n Second Number = ");
    scanf("%d",&No[1]);
    printf("\n Third Number = ");
    scanf("%d",&No[2]);
    printf("\n Fourth Number =");
    scanf("%d",&No[3]);
    printf("\n Fifth Number = ");
    scanf("%d",&No[4]);
    printf("\n Sixth Number = ");
    scanf("%d",&No[5]);
    printf("\n Sevanth Number = ");
    scanf("%d",&No[6]);

    system("cls");

    printf("\n Enter Any Key To See All Numbers");
    getch();
    printf("\n First Number = %d",No[0]);
    printf("\n Second Number = %d",No[1]);
    printf("\n Third Number = %d",No[2]);
    printf("\n Fourth Number = %d",No[3]);
    printf("\n Fifth Number = %d",No[4]);
    printf("\n Sixsth Number = %d",No[5]);
    printf("\n SeventhNumber = %d",No[6]);


    getch();
    return 0;
}



