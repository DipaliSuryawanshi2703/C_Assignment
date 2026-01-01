#include<stdio.h>
#include<conio.h>

int main()
{

    char Ch = '\0';

    printf("\n Enter The Character  =  ");
    scanf("%c", &Ch);

    if(Ch == 'a' || Ch == 'i' ||Ch == 'o' ||Ch == 'u'|| Ch =='e'||
        Ch =='A' || Ch =='I' ||Ch =='O' || Ch =='U'|| Ch=='E' )

        printf("\n The character '%c' is a vowel.  ", Ch);

    else if((Ch>='A'&& Ch<='Z')||(Ch>='a'&& Ch<='z'))
          printf("\n The Character '%c' is a consonant",Ch);

    else
        printf("\n The Character '%c' is a Other",Ch);

    getch();
    return 0;
}

