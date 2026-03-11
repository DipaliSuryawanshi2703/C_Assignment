#include<stdio.h>
#include<conio.h>

int main()
{

    int i = 0, j = 0, RC = 0;


    printf("\n Enter The Row Count =>   ");
    scanf("%d",&RC);

    for(i = 1 ; i <= RC ; i++)
    {
        for(j = 1; j <= RC; j++)
        {
            if( ( (i >= j) && ( RC+1 >= i+j )) || ( (i+j) >= (RC+1) && (i <= j)) || (  (RC+1)/4 == i ) && ((j == ((RC+1)/2) - 1) || ((j == ((RC+1)/2) + 1))) || ( ( j == ((RC+1)/2) && ((i <= (RC+1)/2) && ( i > (RC+1)/4)))) )
               {
                    printf(" * ");
               }
            else{
                printf("   ");
            }

        }


        printf("\n");
    }

    getch();
    return 0;
}













