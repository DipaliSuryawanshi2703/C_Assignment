#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0 , No = 0;

    printf("\n Table From 7 to 13 =>  \n");

    for( Cnt = 1; Cnt <= 10; Cnt++)
    {
        for(No = 7; No <=13 ; No++)
        {
            printf(" %3d", No * Cnt);
        }
        printf("\n");

    }
    getch ();
    return 0;
}
