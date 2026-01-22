#include<stdio.h>
#include<conio.h>

int main ()
{
    int Cnt = 0 , No = 0;

    printf("\n Enter the number =>   ");
    scanf("%d", &No);

    printf("\n Table For %d \n",No);

    for( Cnt = 10 ; Cnt >0 ; Cnt--)
    {
        printf("\n\t %3d" , Cnt * No );

    }
    getch ();
    return 0;
}
