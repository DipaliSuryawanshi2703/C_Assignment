#include<stdio.h>
#include<conio.h>

int main()
{
  int yr=0;
  printf("\n Enter The Year =  ");
  scanf("%d", &yr);

  if (yr < 1000 || yr > 9999)
      printf("\n ....Please Enter The Valid Year...." );

  else if (yr % 4 ==0 )
      printf("\n The Year %d Is A Leap Year", yr);

  else
      printf("\n The Year %d Is A Not Leap Year", yr);

     getch();
     return 0 ;
}




    



