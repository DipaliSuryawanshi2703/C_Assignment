#include<stdio.h>
#include<conio.h>

int main()
{
    int T = 0;

    printf("\n ASCII Table Is =>  \n");

    while(T < 128)
    {
        printf("\n\t %d : '%c' \n",T,T);
        T++;
    }
    getch();
    return 0;
}

