#include<stdio.h>
#include<conio.h>

int main ()
{
    char chat='z';

    printf("\n Enter a character(A-Z) : ");
    scanf("%c", &chat);

    if (chat=='a' || chat=='i' ||chat=='o' ||chat=='u'||chat=='e'||
        chat=='A' || chat=='I' ||chat=='O' ||chat=='U'||chat=='E' )
        printf("\n The character '%c' is a vowel.  ", chat);

    else
        printf("\n The Character '%c' is a consonant",chat);

    getch();
    return 0;

}









