#include<stdio.h>
#include<conio.h>

int main()
{

    int Cnt = 0, No = 0, Min = 0;

    printf("\n Enter The Number =>   ");

    while(Cnt < 7)
    {
        printf("\n Enter The Number %d = ", Cnt+1);
        scanf("%d",&No);

        if(Cnt ==0  || No < Min)
        {
            Min = No;


        }
        Cnt++;
    }
    printf("\n\n===================****************=======================");
    printf("\n The Manimum Number Fron Above %d Numbers = %d \n ", Cnt+1, Min);

    printf("\n\n===================****************=======================");

}

