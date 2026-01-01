#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';

    printf("\n Enter Any Letter For Convert Uppercase To Lower Case => ");
    Ch=getche();

    if(Ch>='A' && Ch<='Z')
     {
        Ch= Ch+32;
        printf("\n Given Letter In Lowercase = %c \n\n",Ch);
     }

    else if (Ch >='a' && Ch <='z')
        printf("\n Letter Is All ready in Lowercase.\n");

    else
       {
        printf("\n The Given Letter Is Not Alphabet.");
        printf("\n ..Please Enter The Letter..\n\n");
       }

        getch ();
        return 0;
}
