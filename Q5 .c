//Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
int main()
{
    int n,i=0;
    printf("Enter any no.:- \n");
    scanf("%d",&n);
    while(n)
    {
        n=n/10;
        i++;
    }
    if(i==3)
        printf("number is three digit");
    else
        printf("number is not three digit");
    return 0;
}
