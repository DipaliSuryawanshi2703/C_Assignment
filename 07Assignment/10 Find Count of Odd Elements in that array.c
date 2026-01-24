#include<stdio.h>
#include<conio.h>
#define Size 10

int main()
{
    int i =0, Cnt = 0 , Num[Size] = {};
    printf("\n Enter The Numbers =>  \n ");

    for( i = 0 ; i < Size ; i++)
    {
        printf("\n Enter The Number %d =>  ",i+1);
        scanf("%d",&Num[i]);

        if(Num[i] % 2 == 1 && Num[i] != 0)
        {
            Cnt++;
        }
    }
    printf("\n =================*************================== \n");

   printf("\n Odd Numbers In The File Are %d",Cnt);
   getch();
   return 0;
}
