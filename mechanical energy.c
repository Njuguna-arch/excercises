//program to calculate mechanical energy
/*author Joseph JN
Date 24th Oct 2024*/
#include <stdio.h>
int main()
{
float mass, m;
float gravity, g;
float height, h;
float velocity, v;
float Energy, E;

//prompt user to enter values given
printf("enter mass,m in kg:\n",m);
scanf("%f",&m);
printf("enter gravitational acceleration,gin N:\n",g);
scanf("%f",&g);
printf("enter height,h in metres\n",h);
scanf("%f",&h);
printf("enter the velocity, v:\n",v);
scanf("%f",&v);
//formula for energy
    E = (m*g*h + 0.5*m*v);
printf("The Energy is:%.2f J",E);

return 0;
}
