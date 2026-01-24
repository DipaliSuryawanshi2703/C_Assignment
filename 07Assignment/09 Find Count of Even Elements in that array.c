#include<stdio.h>
#include<conio.h>
#define size 10

int main()
{
    int Num[size]={} , i = 0, Cnt = 0;

    printf("\n Enter The Numbers \n");

    for(i = 0 ; i < size; i++)
    {
        printf("\n Enetr The Number %d  =>   ",i+1);
        scanf("%d",&Num[i]);

        if( Num[i] % 2 == 0 && Num[i] != 0)
        {
            Cnt++;
        }
    }
    printf("\n =================*************================== \n");

    printf("\n Even Numbers In The File Are %d",Cnt);
    getch();
    return 0;
}


