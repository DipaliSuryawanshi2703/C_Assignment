#include<stdio.h>
#include<conio.h>
#define Size 10

int main()
{
    int Num[Size] = {}, i = 0, Max = 0,  Max2 = 0, flag =-1, Max3 = 0;

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
    for(i = 0; i < Size; i++)
    {
        if( Num[i] != Max )
        {
            if (flag == -1 || Num[i] > Max2)
            {
                Max2 = Num[i];
            }
            flag = 1;
        }
    }
    for(i = 0; i < Size; i++)
    {
        if( Num[i] != Max && Num[i] != Max2 )
        {
            if (flag == 1 || Num[i] > Max3)
            {
                Max3 = Num[i];
            }
            flag = -1;
        }
    }

    printf("\n ===================************=================");

    printf("\n The Maximum Number From Given Element Is %d \n",Max);
    printf("\n The Second Maximum Number From Given Element Is %d ",Max2);
    printf("\n The Second Maximum Number From Given Element Is %d ",Max3);
    getch();
    return 0;
}

