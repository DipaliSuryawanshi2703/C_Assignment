#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = 'H';
    printf("\n Letters From H To N =>  \n\n");

    while(Ch<='N')
    {
        printf("\n\t %c",Ch);
        Ch++;
    }
    getch();
    return 0;
}
