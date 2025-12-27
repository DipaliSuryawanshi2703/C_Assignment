#include<stdio.h>
#include<conio.h>

int main()
{
    int Number= 0;

    printf("\n Enter The Number = ");
    scanf("%d",&Number);

    if(Number % 2 == 0)
        printf("\n Number Is Even");
    else
    {
        printf("\n Number Is Odd");
    }
    getch();
    printf("\n Thank You!");


    getch();
    return 0;




}


