#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch ='\0';

    printf("\n Enter The Letter => ");
    Ch=getche();

    printf("\n ====================************=============\n");
    if((Ch>='A' && Ch<='Z')|| (Ch >='a' && Ch <='z'))
        printf("\n Give Letter '%c' is Alphabet. ",Ch);

    else
        printf("\n Given Letter '%c' Is Not Alphabet",Ch);
    getch();
    return 0;
}
