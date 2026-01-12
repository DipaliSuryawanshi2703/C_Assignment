#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';

    printf("\n Enter Any Character To Find ASCII Value Of Those Character => ");
    scanf("%c",&Ch);

    if(Ch >= 'A' && Ch <= 'Z' || Ch >= 'a' && Ch <= 'z' )
    {
        printf("\n ASCII value Of %c Is %d",Ch,Ch);
    }
    else
        printf("\n ......Enter The Character Only .......\n");

     printf("\n ==========================\n");

    getch ();
    return 0;


}
