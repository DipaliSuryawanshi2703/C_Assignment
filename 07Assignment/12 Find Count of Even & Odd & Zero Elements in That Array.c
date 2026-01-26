#include<stdio.h>
#include<conio.h>
#define Size 10

int main()
{
    int Num[Size] = {}, i = 0, E_Cnt = 0, O_Cnt = 0, Z_Cnt = 0;

    printf("Enter The Elements =>  \n");

    for(i = 0; i < Size; i++)
    {
        printf("\n Enter The Element %d  :  ",i+1);
        scanf("%d",&Num[i]);
    }
    for(i = 0; i < Size; i++)
    {
        if(Num[i] % 2 == 0 && Num[i] != 0)
        {
            E_Cnt++;
        }
        if(Num[i] % 2 == 1 && Num[i] != 0)
        {
            O_Cnt++;
        }
        if( Num[i] == 0)
        {
            Z_Cnt++;
        }
    }
    printf("\n In Given Set Of Element %d Numbers Are Even",E_Cnt++);
    printf("\n In Given Set Of Element %d Numbers Are Odd",O_Cnt++);
    printf("\n In Given Set Of Element %d Numbers Are Zero",Z_Cnt++);

    getch();
    return 0;


}
