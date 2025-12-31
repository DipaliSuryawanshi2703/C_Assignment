#include<stdio.h>
#include<conio.h>

int main ()
{
    char Ch='z';

    printf("\n Enter a character(A-Z) : ");
    Ch=getche();

    if (Ch=='a' || Ch=='i' ||Ch=='o' ||Ch=='u'||Ch=='e'||
        Ch=='A' || Ch=='I' ||Ch=='O' ||Ch=='U'||Ch=='E' )
        printf("\n \n The character '%c' is a vowel.  ", Ch);

    else if ((Ch>='A'&& Ch<='Z')||(Ch>='a'&& Ch<='z'))
        printf("\n\n The Character '%c' is a consonant\n",Ch);

    else
        printf("\n Please Enter The Alphabet..");

    getch();
    return 0;

}









