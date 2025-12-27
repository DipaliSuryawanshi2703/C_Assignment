#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter The Number =  ");
    scanf("%d", &No);

    if (No%7 == 0 && No%5 == 0)
        printf("\n %d is divisible of 5 and 7", No);

    else if(No%7 == 0)
        printf("\n %d is divisible by 7", No);

    else if (No%5 == 0)
        printf("\n %d is divisible by 5",No);

    else
        printf("\n %d is Not Divisible by 5 &7" , No);

    getch();
    return 0;
}
