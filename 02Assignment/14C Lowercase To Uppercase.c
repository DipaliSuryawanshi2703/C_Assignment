#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';

    printf("\n Enter Any Letter For Convert Lowercase To Uppercase => ");
    Ch=getche();

    if(Ch>='a' && Ch<='z')
     {
        Ch= Ch-32;
        printf("\n Given Letter In Uppercase = %c ",Ch);
     }

    else if (Ch >='A' && Ch <='Z')
        printf("\n Letter Is All ready in Uppercase.");

    else
       {
        printf("\n The Given Letter Is Not Alphabet.");
        printf("\n ..Please Enter The Letter..");
       }

        getch ();
        return 0;
}

