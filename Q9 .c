/*Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter any three no. :- \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        if(b<c)
            printf("greater no= %d",c);
        else
            printf("greater no= %d",b);
    }
    else
    {
        if(a<c)
            printf("greater no= %d",c);
        else
            printf("greater no= %d",a);
    }
    getch();
    return 0;
}
