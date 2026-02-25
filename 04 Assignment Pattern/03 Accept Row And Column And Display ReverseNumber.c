#include<stdio.h>
#include<conio.h>

int main()
{

    int i = 0, j = 0, R = 0, C = 0 , Num = 0;

    printf("\n Enter The Row Count =>   ");
    scanf("%d",&R);
    printf("\n Enter The Column Count => ");
    scanf("%d",&C);
    printf("\n");

    for(i = 1 ; i <= R ; i++)
    {
        for( Num = C,j = 1; j <= C; j++)
        {
            printf(" %d ",Num);
            Num--;

        }
        printf("\n");
    }

    getch();
    return 0;
}


