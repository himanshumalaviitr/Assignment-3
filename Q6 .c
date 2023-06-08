/*Write a program to print greater between two numbers. Print one number of both are
the same.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter any two no.:-\n");
    scanf("%d%d",&a,&b);
    if(a<=b)
        printf("\ngreater no.= %d",b);
    else
        printf("\ngreater no.= %d",a);
    getch();
    return 0;
}
