/*Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter sides of triangle:-\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b+c&&b<a+c&&c<a+b)
        printf("sides are valid for triangle");
    else
        printf("sides are valid for triangle");
    getch();
    return 0;
}
