#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 10


int main()
{
    int Num[Size] = {} , Cnt = 0 , i =0 ;

    printf("\n Enter The Numbers => ");

    for(i = 0; i < Size ; i++)
    {
        printf( "\n Enter The Number %d = ",i+1);
        scanf("%d",&Num[i]);
            if( Num[i] != 0)
            {
                Cnt++;
            }

    }
    system("cls");
    for(i = 0; i < Size ; i++)
    {
        printf("\n The Given Number %d is %d ", i+1,Num[i]);

    }
    printf("\n Number Count Is %d ", Cnt);
    getch();
    return 0;
}
