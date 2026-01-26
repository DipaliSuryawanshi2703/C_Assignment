#include<stdio.h>
#include<conio.h>
#define Size 10

int main()
{
    int Num[Size] ={}, i = 0, Max = 0;

    printf("\n Enter The All Element =>  \n");

    for(i = 0; i < Size ; i++)
    {
        printf("\n Enter The Number %d : ",i+1);
        scanf("%d",&Num[i]);
        if(i == 0 || Num[i] > Max)
        {
            Max = Num[i];
        }
    }
    printf("\n ===================************=================");
    printf("\n The Maximum Number From Given Element Is %d ",Max);
    getch();
    return 0;
}
