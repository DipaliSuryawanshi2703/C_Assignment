#include<stdio.h>
#include<conio.h>

int main()
{

    int i = 0, j = 0, R = 0, C = 0 ;
    char Ch = 'A';

    printf("\n Enter The Row Count =>   ");
    scanf("%d",&R);
    printf("\n Enter The Column Count => ");
    scanf("%d",&C);
    printf("\n");

    for(i = 1 ; i <= R ; i++)
    {
        for(Ch = 'A', j = 1; j <= C; j++)
        {
            printf(" %c ",Ch);
            Ch++;

            if(Ch > 'Z')
            {
                Ch = 'A';
            }
        }

        printf("\n");
    }

    getch();
    return 0;
}




