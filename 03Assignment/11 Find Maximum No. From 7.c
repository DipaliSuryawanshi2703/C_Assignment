#include<stdio.h>
#include<conio.h>

int main()
{

    int Cnt = 0, No = 0, Max = 0;

    printf("\n Enter The Number =>   ");

    while(Cnt < 7)
    {
        printf("\n Enter The Number %d = ", Cnt+1);
        scanf("%d",&No);

        if(Cnt ==0  || No > Max)
        {
            Max = No;


        }
        Cnt++;
    }
    printf("\n\n===================****************=======================");
    printf("\n The Maximum Number Fron Above %d Numbers = %d", Cnt+1 , Max);
    printf("\n\n===================****************=======================");
}
