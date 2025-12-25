#include<stdio.h>
#include<conio.h>

int main()
{
    float Radius = 0;
    float PI = 3.14;
    float circumference = 0;

     printf("\n circumference Of Circle =   ");

     printf("\n Enter the Radius Of Circle =   ");
     scanf("%f",&Radius);

     circumference = 2 * PI * Radius;
     printf("\n Circumference Of Circle => 2 * PI * %f = %f",Radius,circumference);

     getch();
     return 0;


}
