#include<stdio.h>
#include<conio.h>

int main()
{
    float KM = 0;
    float M = 0;

    printf("\n Convert The Kilometer to Meter  =   ");


    printf("\n Enter Distance In Kilometer = ");
    scanf("%f",&KM);

    printf("\n********************************************************\n");

    M = KM * 1000;
    printf("\n Given Distance is %0.2f KM = %0.3f M ", KM,M);

    getch ();
    return 0;
}
