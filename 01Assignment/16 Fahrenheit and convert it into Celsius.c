#include<stdio.h>
#include<conio.h>

int main()
{
    float Fahrenheit = 0;
    float Celsius = 0;

    printf("\n temperature in Fahrenheit and convert it into Celsius");

    printf("\n Enter Temperature in Fahrenheit =   ");
    scanf("%f",&Fahrenheit);

     Celsius = (Fahrenheit -32) * (5.0/9.0);
    printf("\n Temperature In Celsius => %0.2f ",Celsius);

    getch();
    return 0;

}
