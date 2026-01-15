#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enetr The Any Number = ");
    scanf("%d",&No);

    printf("\n =================**********************========================");

    (No % 2 == 0)? printf("\n\n Given Number %d Is Even ",No) : printf(" \n\n Given Number %d Is Odd",No);

    getch();
    return 0;
}
