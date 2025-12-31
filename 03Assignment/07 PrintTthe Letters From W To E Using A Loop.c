#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = 'W';
    printf("\n Letters From W To E =>  \n\n");

    while(Ch>='E')
    {
        printf("\n\t %c",Ch);
        Ch--;
    }
    getch();
    return 0;
}

