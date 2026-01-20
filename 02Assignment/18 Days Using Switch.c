#include<stdio.h>
#include<conio.h>

int main()
{

    int Days = 0;

    printf("\n Enter The Days (1-7)  =>      \n");
    scanf("%d",&Days);

    switch(Days)
    {
    case 1:
        printf("\n Days Is Monday");
        scanf("%d",Days);


    case 2:
        printf("\n Days Is Tuesday");

    case 3:
        printf("\n Days Is Thursday");

    case 4:
        printf("\n Days Is Wednesday");

    case 5:
        printf("\n Days Is Friday");

    case 6:
        printf("\n Days Is Saturday");

    case 7:
        printf("\n Days Is Sunday");

    default:
        printf("\n .....Enter valid Days..... ");
    }
    getch ();
    return 0;
}

