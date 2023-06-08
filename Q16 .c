/*Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter any character:- ");
    scanf("%c",&a);
    if(a>='A'&&a<='Z')
        printf("Alpabet (uppercase)");
    else if(a>='a'&& a<='z')
        printf("Alphabet (lower case)");
    else if(a>='0'&&a<='9')
        printf("Digit");
    else
        printf("Special character");
    getch();
    return 0;
}
