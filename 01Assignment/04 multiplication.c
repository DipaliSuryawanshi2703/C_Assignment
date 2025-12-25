#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0 ,No2 = 0 ,Multi = 0;

    printf("\n Enetr The No1 = ");
    scanf("%d",&No1);

    printf("\n Enter The No2 = ");
    scanf("%d",&No2);

    Multi=No1*No2;
    printf(" Multiplication of both numbers => %d * %d = %d" ,No1 ,No2 ,Multi);

    getch();
    return 0;
}
