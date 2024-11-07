/*nested if program to check numbers
author Joseph*/
#include <stdio.h>
int main()
{
int num;
//prompt user to enter any number
printf("This program checks if a number is positive, zero or negative\n");
printf("Enter any number:\n", num);
scanf("%d",&num);
if(num>0)
{printf("Positive");}
else if(num==0)
{printf("Zero");}
else if(num<0)
{printf("Negative");}


return 0;
}
