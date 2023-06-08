/*Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5];
    int i;
    printf("Enter marks of 5 subject ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++)
        if(a[i]<33)
        {
            printf("\nFailed\n");
            break;
        }
   if(i==5)
    printf("\nPassed\n");
   getch();
   return 0;
}
