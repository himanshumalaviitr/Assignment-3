/*Write a program to check whether a given number is an even number or an odd
number.*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any no.:- ");
    scanf("%d",&n);
    if(n%2)
    {
        printf("No. is ODD");
    }
    else
    {
         printf("No. is EVEN");
    }
}
