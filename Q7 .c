/*Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,D;
    printf("Enter a,b,c respectively:-\n");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0)
        printf("Roots are Real and distinct ");
    else if(D<0)
        printf("Roots are imaginary ");
    else
        printf("Roots are Real and Same ");
    getch();
    return 0;
}
