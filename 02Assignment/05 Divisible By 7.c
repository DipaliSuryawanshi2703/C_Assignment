#include<stdio.h>
#include<conio.h>

int main()
{

  int Num  = 0;

  printf("\n Enter The Number  =  ");
  scanf("%d", &Num);

  if(Num%7 == 0)
  {
     printf("\n %d is divisible by 7",Num) ;
  }
  else
    printf("\n %d is Non-divisible by 7",Num);

  getch();
  return 0;
}
