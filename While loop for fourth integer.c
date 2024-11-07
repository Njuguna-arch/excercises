/*while loop for sum of every 4th integer
Author Joseph*/
#include <stdio.h>
int main()
{
int num = 3;
int sum;

while(num<30)
{printf("The numbers are:%d\n", num);
num+=4;}
sum = (3+7+11+15+19+23+27);
printf("    \n");
printf("the sum of the numbers is:%d", sum);
return 0;
}
