#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt =0;
    printf("\n Enter The Count Of Star = ");
    scanf("%d",&Cnt);

    printf("\n=============================================================================\n");

    for( Cnt>0; Cnt--;)
   {
       printf("\n\t*");
   }
        printf("\n ...Thank You... ");

        getch();
        return 0;
}
