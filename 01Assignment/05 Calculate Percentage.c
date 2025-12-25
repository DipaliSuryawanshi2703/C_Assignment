#include<stdio.h>
#include<conio.h>

int main()
{



    int Physics = 0 ,Maths = 0   ,English = 0 ,sum = 0;
    float per=0;

    printf("\n Enter The Mark Of All Subjects:   ");

    printf("\n Enter marks in Physics = ");
    scanf("%d",&Physics);

    printf("\n Enter marks in Maths = ");
    scanf("%d",&Maths);

    printf("\n Enter Marks in English = ");
    scanf("%d",&English);

    sum=Physics+Maths+English;

    per= (float)sum/3;

   printf("\n Total of three subject = %d + %d + %d = %d", Physics, Maths, English, sum);

   printf("\n Petcentage = %0.2f", per);


    getch();
    return 0;
}


