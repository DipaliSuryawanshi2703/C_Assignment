#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0, No = 0;

    printf("\n Enter the Number =>   ");
    scanf("%d",&No);

    printf("\n Table For %d =>   \n", No);

    for( Cnt = 1; Cnt <= 10; Cnt++)
    {
        printf("\n\t %3d ", No * Cnt);
    }
    getch ();
    return 0 ;
}
