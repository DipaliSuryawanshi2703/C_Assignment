#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0, No = 0 , No_Sum = 0;

    printf("\n Enter All Ten Number  => \n");

    while(Cnt < 10)
    {
        printf("\n Enter The Number %d => ",Cnt+1);
        scanf("%d",&No);

        No_Sum = No_Sum + No;
        Cnt++;

    }
    printf("\n Sum Of 10 Numbers =>%d ",No_Sum);
    getch ();
    return 0;
}


