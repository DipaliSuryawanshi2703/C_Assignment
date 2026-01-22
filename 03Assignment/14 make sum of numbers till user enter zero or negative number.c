#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0, No = 0, No_Sum = 0;

    printf("\n Enter All  Number  => \n");

    while(1)
    {
        printf("\n Enter The Number %d => ",Cnt+1);
        scanf("%d",&No);
        if( No <= 0)
        {
            break;
        }

        No_Sum = No_Sum + No;
        Cnt++;

    }
    printf("\n Sum Of %d Numbers =>%d ", Cnt ,No_Sum);
    getch ();
    return 0;
}




