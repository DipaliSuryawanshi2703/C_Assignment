#include<stdio.h>
#include<conio.h>

int main()
{
    int Number = 0;
    int Cube = 0;

    printf("\n Calculate The Cube Of Given Number ");

    printf("\n Enter The Number = ");
    scanf("%d",&Number);

    Cube=Number * Number * Number;
    printf("\n Cube Of Given Number => %d = %d",Number,Cube);

    getch();
    return 0;
}
