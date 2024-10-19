//using switch in a program
#include <stdio.h>
/*program to check the day of the week
author Joseph
Date 19th Oct 2024*/
int main()
{
int day,d;
printf("input the day in number form\n");
scanf("%d", &d);

switch (day, d){

case 1:
printf("The day is Monday");
break;
case 2:
printf("The day is Tuesday");
break;
case 3:
printf("The day is Wednesday");
break;
case 4:
printf("The day is Thursday");
break;
case 5:
printf("The day is Friday");
break;
case 6:
printf("The day is Saturday");
break;
case 7:
printf("The day is Sunday");
break;
default:
    printf("Looking forward to the weekend");

}
return 0;
}
