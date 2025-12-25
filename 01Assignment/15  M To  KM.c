#include<stdio.h>
#include<conio.h>

int main()
{
    float Kilometer = 0;
    float Meter = 0;

    printf("\n Convert The Kilometer To Meter =   ");


    printf("\n Enter Distance In Meter");
    scanf("%f",&Meter);

    Kilometer = Meter/1000;
    printf("\n Given Distance is %0.2f =%0.3f ",Meter, Kilometer);

    getch ();
    return 0;
}
