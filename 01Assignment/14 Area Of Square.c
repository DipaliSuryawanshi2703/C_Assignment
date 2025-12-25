#include<stdio.h>
#include<conio.h>

int main()
{
    float Side = 0;
    float Area = 0;

    printf("\n Area Of Square=  ");

    printf("\n Enter The Side Lenght Of Square =  ");
    scanf("%f",&Side);

    Area = Side*Side;

    printf("\n Area Of Square => %0.2f *%0.2f = %0.2f " , Side,Side,Area);

    getch();
    return 0;





}
