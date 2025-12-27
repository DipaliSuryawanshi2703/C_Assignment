#include<stdio.h>
#include<conio.h>

int main()
{

    char chat='z';

    printf("\n Enter The Character  =  ");
    scanf("%c", &chat);

    if(chat=='a' || chat=='i' ||chat=='o' ||chat=='u'||chat=='e'||
        chat=='A' || chat=='I' ||chat=='O' ||chat=='U'||chat=='E' )
        printf("\n The character '%c' is a vowel.  ", chat);

    else if(chat >= A && chat <= Z)
          printf("\n The Character '%c' is a consonant",chat);

    else
        printf("\n The Character '%c' is a Other",chat);

    getch();
    return 0;
}

