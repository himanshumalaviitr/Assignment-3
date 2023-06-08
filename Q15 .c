//Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter any no.:-\n");
    scanf("%d",&n);
    if(n>0)
        printf("No. is positive");
    else if(n<0)
        printf("No. is Negative");
    else
        printf("No. is Zero");
    getch();
    return 0;
}
