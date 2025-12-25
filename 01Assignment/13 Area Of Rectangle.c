#include<stdio.h>
#include<conio.h>

int main()
{
    float Height = 0;
    float Width = 0;
    float Area = 0;

    printf("\n Area Of Rectangle=   ");

    printf("\n Enter The Height Of Rectangle= ");
    scanf("%f",&Height);

    printf("\n Enter The Width Of Rectangle= ");
    scanf("%f",&Width);

    Area=Height*Width;
    printf("\n Area of Rectangle=> %0.2f   *%0.2f = %0.2f",   Height, Width, Area);

    getch();
    return 0;
}
