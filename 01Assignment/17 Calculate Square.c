#include<stdio.h>
#include<conio.h>

int main()
{
    int Number = 0 , Square = 0;

    printf ("\n Calculate the Square =  ");

    printf("\n Enter The Number = ");
    scanf("%d",&Number);

    Square = Number * Number;
    printf("\n Square Of Given Number Is => %d = %d" ,Number,Square);

    getch();
    return 0;
}

