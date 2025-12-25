#include<stdio.h>
#include<conio.h>

int main()
{
    float Kilometer = 0;
    float Meter = 0;

    printf("\n Convert The Meter to  Kilometer =   ");


    printf("\n Enter Distance In Meter");
    scanf("%f",&Meter);

    Kilometer = Meter/1000;
    printf("\n Given Distance is %0.2fm =%0.3fkm ",Meter, Kilometer);

    getch ();
    return 0;
}

