#include<stdio.h>
#include<conio.h>
#define Size 10

int main()
{
    int Num[Size] = {}, Cnt = 0 , Sum = 0 , i =0;

    printf("\n Enter The All Elements To Find The Sum Of The Element \n");

    for(i = 0; i < Size ; i++)
    {
        printf("\n Enter The Element %d : ",i+1 );
        scanf("%d",&Num[i]);

        Sum += Num[i];
    }
    printf("\n============================================\n");
    printf("\n Sum Of All Elements Is =  %d",Sum);
    getch();
    return 0;
}
