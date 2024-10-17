#include <stdio.h>

#define pi 3.142
int main(){

float radius,r ;
float area;

    //prompt user to input radius
    printf("enter radius of the circle: \n");
    scanf("%f", &r);
    area = pi * r * r;
printf("the area is:%.2f ", area);
return 0;


}
