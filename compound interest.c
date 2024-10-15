//program to calculate compound interest
#include <stdio.h>
#include <math.h>
/*compound interest
author: joseph
date 15th Oct 2024*/

int main(){
float principle,p;
float rate,r;
float time, t;
float amount, A;
float interest, CI;
float number_of_time_per_year, n;

printf("enter principle,p\n");
    scanf("%f", &p);
printf("enter rate,r\n");
    scanf("%f", &r);
    r = r / 100;
printf("enter time in years,t\n");
    scanf("%f", &t);
printf("enter the number of time that the interest is compounded annually,n\n");
        scanf("%f", &n);

//calculate the final amount after time, t, with compound interest
    A= p * pow(( 1 + r / n), n * t);
//compound interest= Amount-principle
    CI = A - p;
printf("The interest is:%.2f ",CI);
return 0;

}
