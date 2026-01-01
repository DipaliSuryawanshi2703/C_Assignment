#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';

    printf("\n Enter Any Letter For Convert Uppercase To Lower Case => ");
    scanf("%c",&Ch);

    if(Ch>='A' && Ch<='Z')
     {
        printf("\n Given Letter'%c' Is Uppercase",Ch);
     }

    else if (Ch >='a' && Ch <='z')
         printf("\n Given Letter '%c' Is Lowercase",Ch);

    else
       {
        printf("\n The Given Letter '%c' Is Not Alphabet.",Ch);
        printf("\n ..Please Enter The Letter..");
       }

        getch ();
        return 0;
}

