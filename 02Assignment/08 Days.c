#include<stdio.h>
#include<conio.h>

int main()
{


 int Number=0;

 printf("\n Write Here Any Number From 1-7 ");
 scanf("%d",&Number);

 if(Number==1)
 {
     printf("\n Monday- Important Notes");
     printf("\n To visit Mahadev mandir");
 }
 else if(Number==2)
 {
     printf("\n Tuesday- Important Notes");
     printf("\n It is student meeting day");
 }
 else if(Number==3)
 {
    printf("\n Wednesday- Important Notes");
    printf("Practice C-Programming Assignment");
 }

 else if(Number==4)
 {
     printf("\n Thursday-Important Note");
     printf("\n Sumit Your Yesterday Assignment");

 }
 else if(Number==5)
 {
    printf("\n Friday- Important Notes");
    printf("\n #c Lecture ");
 }
 else if(Number==6)
 {
     printf("\n Saturday -Important Notes");
     printf("\n Join online workshop");
 }
 else if(Number==7)
 {
     printf("\n Sunday-Important Notes");
     printf("\n Enjoy Your Holiday");
 }
 else
    {
        printf("\n\n....Invalid Number Please Try Again .....");
    }
    printf("\n\n\a\t Have A Nice Day");


    getch();
    return 0;
 }









