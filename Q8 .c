//Write a program to check whether a given year is a leap year or not.

#include<stdio.h>
#include<conio.h>
int main()
{
    int y;
    printf("Enter year :-\n");
    scanf("%d",&y);
    if(y%100)
    y%4 ? printf("not a leap year") : printf("leap year");
    else
    y%400 ? printf("not a leap year") : printf("leap year");

    getch();
    return 0;
}
