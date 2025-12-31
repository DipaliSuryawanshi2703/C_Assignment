#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0 , No2 = 0;

    printf("\n Enter First Number => ");
    scanf("%d",&No1);

    printf("\n Enter Second Number => ");
    scanf("%d",&No2);

    printf("\n\n***************************************************************************\n\n");

    for(No2>0; No2--;)
    {
        printf("\t%d",No1);
    }
    printf("\n\n !!Have A Nice Day!!");
    getch();
    return 0;
}
