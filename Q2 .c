//Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any no.:- ");
    scanf("%d",&n);
    if(n%5)
    {
        printf("No. is NOT divisible by 5");
    }
    else
    {
         printf("No. is divisible by 5");
    }
}
