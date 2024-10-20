//program to determine whether a customer is eligible to take a loan

#include <stdio.h>
/*program for a bank
author: Joseph
Date 20th Oct 2024*/

int main()
{
int age;
int annual_income;
//prompt user to enter age
    printf("Enter your age: \n");
    scanf("%d", &age);
//prompt user to enter annual income
    printf("Emter your annual income: \n");
    scanf("%d", &annual_income);
// if.... else statements
if(age>=21 && annual_income>=21000)
{printf("Congratulations!! You qualify for a loan");}
else
{printf("Unfortunately, we are unable to offer you a loan at this time");}
return 0;
}
