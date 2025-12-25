#include<stdio.h>
#include<conio.h>

int main()
{


 int Radius = 0;
 float Area = 0;
 float PI = 3.14;

 printf("\n Area Of Circle =    ");

 printf("\n Radius Of Circle = ");
 scanf("%d",&Radius);

 Area=PI*Radius*Radius;
 printf("\n Area of Circle => %f * %d * %d = %f", PI, Radius, Radius, Area);

 getch();
 return 0;
}
