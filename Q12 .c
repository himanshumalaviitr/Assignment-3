//Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter any alphbet:-\n");
    scanf("%c",&a);
    if(a>='A'&&a<='Z')
        printf("\nUppercase");
    else if(a>='a'&&a<='z')
        printf("\nLowercase");
    else
        printf("Enter alphabet only");
    getch();
    return 0;
}
