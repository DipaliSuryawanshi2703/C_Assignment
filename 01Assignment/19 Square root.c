#include<stdio.h>
#include<conio.h>

int main()
{
    int Number = 0;
    int Squareroot = 0;

    printf("\n Calculate The Squareroot = ");

    printf("\n Enter The Number = ");
    scanf("%d",&Number);

    Squareroot = sqrt(Number);
    printf("\n Square Root Of Given Number = sqrt(%d)=%d",Number,Squareroot);

    getch();
    return 0;

}
