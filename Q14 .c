//Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter any no.:-\n");
    scanf("%d",&n);
    if(n%3==0||n%7==0)
        printf("no. is divisible by 7 or 3");
    else
        printf("no. is not divisible by 7 or 3");
    getch();
    return 0;
}
