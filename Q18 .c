/*Write a program which takes the month number as an input and display number of
days in that month*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int m;
    printf("Enter month no. :-\n");
    scanf("%d",&m);
    switch(m)
    {
        case 2:
           printf("no of days 28 or 29");
           break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 10:
        case 12:
              printf("no of days 31");
              break;
        case 4:
        case 6:
        case 9:
        case 11:
             printf("no of days 30");
             break;
    }
    getch();
    return 0;
}
