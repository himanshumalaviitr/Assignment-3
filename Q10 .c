/*Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    float c,s,p;
    printf("Enter cost price:- ");
    scanf("%f",&c);
    printf("Enter selling price:- ");
    scanf("%f",&s);
    p=(s-c)/c*100;
    if(p>0)
        printf("profit percentage= %f",p);
    else
    {
        p=-p;
        printf("loss percentage=%f",p);
    }
    getch();
    return 0;
}
