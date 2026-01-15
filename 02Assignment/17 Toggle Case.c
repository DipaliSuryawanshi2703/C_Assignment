#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';

    printf("\n Enter Any Letter => ");
    Ch=getche();

     printf("\n ====================************=============\n");

    if(Ch>='a' && Ch<='z')
     {
        Ch= Ch-32;
        printf("\n Given Letter In Uppercase = %c ",Ch);
     }

    else if (Ch >='A' && Ch <='Z')
    {
        Ch=Ch+32;
         printf("\n Given Letter In Lowercase = %c ",Ch);
    }
    else
        printf("\n The Given Letter Is = %c",Ch);
        printf("\n ...Thank You...");



        getch ();
        return 0;
}


