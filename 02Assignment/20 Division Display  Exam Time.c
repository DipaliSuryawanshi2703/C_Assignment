#include<stdio.h>
#include<conio.h>

int main()
{

    char div = '\0';

    printf("\n Enter the division of student for Exam Time  (A,B,C,D) => ");
    scanf("%c",&div);

    switch(div)
    {

    case 'A':
    case 'a':
        printf("\n Exam of division A at 10 AM");
        break;

    case 'B':
    case 'b':
        printf("\n Exam of division B at 10.30 AM");
        break;

    case 'C':
    case 'c':
        printf("\n Exam of division C at 1 PM" );
        break;

    case 'D':
    case 'd':
        printf("\n Exam of division D at 1.30 PM");
        break;

    default:
        printf("\n Enter Valid Division Of Student");

    }
    getch ();
    return 0;


}
