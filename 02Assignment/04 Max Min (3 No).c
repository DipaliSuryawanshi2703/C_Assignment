#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0 , No2 = 0 , No3 = 0;

    printf("\n Enter First Number = ");
    scanf("%d",&No1);

    printf("\n Enter Second Number = ");
    scanf("%d",&No2);

    printf("\n Enter Third Number = ");
    scanf("%d",&No3);

    if(No1>No2 && No1>No3)
    {


        printf("\n First Number Is Maximum Than Other Two Numbers");

         if (No2 < No3)
         {
             printf("\n Second Number Is Minimum Than Other Two");
         }
         else
            printf("\n Third Number Is Minimum Than other");
    }




    else if (No2>No1 && No2>No3)
    {


        printf("\n Second Number Is Maximum Than Other Two Numbers");

        if(No1>No3)
        {
            printf("\n Third Number Is Minimum Than Other Two Numbers");
        }
        else
        {
            printf("\n First Number Is Minimum Than Other Two Numbers");
        }

    }


    else if(No3>No1 && No3>No2)

{

      printf("\n Third Number Is Maximum Than Other Two");

        if (No1>No2)
        {
            printf("\n Second Number Is Minimum Than Other Two Numbers");
        }

        else
        {
            printf ("\n First Number Is Minimum Than Other Two Numbers");
        }

}
    else
        printf("\n All Numbers Are Equal");




    getch();
    return 0;

}


