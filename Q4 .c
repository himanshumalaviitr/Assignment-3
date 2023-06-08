/*Write a program to check whether a given number is an even number or an odd
number without using % operator.*/

#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter any no.:- ");
    scanf("%d",&n);
    m=n;
    n=n/2;
    n=n*2;
    if(n==m)
    {
        printf("No. is EVEN");
    }
    else
    {
         printf("No. is ODD");
    }
}

