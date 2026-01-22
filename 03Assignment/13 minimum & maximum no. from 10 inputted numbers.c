#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0, No = 0, Max = 0, Min = 0;

    printf("\n Enter The Number => ");

    while(Cnt < 10 )
    {
        printf("\n Enter The  Number %d =>  ",Cnt+1);
        scanf("%d",&No);

        if(Cnt == 0 || No > Max)
        {
            Max = No ;
        }
        if(Cnt == 0 || No < Min)
        {
            Min = No ;
        }
        Cnt++ ;
    }
    printf("\n\n===================****************=======================");
    printf("\n The Maximum Number From %d => %d \n", Cnt, Max);
    printf("\n The Minimum Number From %d => %d \n", Cnt, Min);
    printf("\n\n===================****************=======================");

    getch ();
    return 0;

}
