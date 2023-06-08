//Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter any no.:-\n");
    scanf("%d",&n);
    if(n%3==0&&n%2==0)
        printf("no. is divisible by 3 and 2");
    else
        printf("no. is not divisible by 3 and 2");
    getch();
    return 0;
}
