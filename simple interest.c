//program to calculate simple interest
#include <stdio.h>
#include <math.h>
/*simple interest
author: Joseph
Date : 14th oct 2024*/

int main(){
float principle, p;
float rate, r;
float time, t;
float si;

printf("enter principle: \n");
scanf("%f", &p);

printf("enter rate: \n");
scanf("%f", &r);

printf("enter time: \n");
scanf("%f", &t);

si=p*r/100*t;

printf("The interest is: %.2f",si);
return 0;


}
