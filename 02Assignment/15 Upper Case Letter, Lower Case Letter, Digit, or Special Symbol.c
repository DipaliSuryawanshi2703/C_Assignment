#include<stdio.h>
#include<conio.h>

int main()
{
    char Ch = '\0';

    printf("\n Enter Any Letter =>  ");
    Ch=getche();

    if(Ch>='a' && Ch<='z')
     {
        printf("\n Given Letter '%c' Is Lowercase.",Ch);
     }

    else if (Ch >='A' && Ch <='Z')
         printf("\n Given Letter '%c' Is Uppercase. ",Ch);

    else if (Ch >= 48 && Ch<= 57)
        printf("\n Given Letter '%c' Is Digit.",Ch);

    else
       {
        printf("\n The Given Letter '%c'Is Special Symbol.",Ch);
       }

        getch ();
        return 0;
}


