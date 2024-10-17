//using if, else and else if
#include <stdio.h>
#include <stdbool.h>

int main()
{
//prompt user to enter marks

int bio, phy, kisw, eng, coding, math, geo;
float average;

printf("enter your bio marks:\n");
scanf("%d",&bio);
printf("enter your phy marks:\n");
scanf("%d",&phy);
printf("enter your kisw marks:\n");
scanf("%d",&kisw);
printf("enter your eng marks:\n");
scanf("%d",&eng);
printf("enter your coding marks:\n");
scanf("%d",&coding);
printf("enter your math marks:\n");
scanf("%d",&math);
printf("enter your geo marks:\n");
scanf("%d",&geo);
average=(bio+ phy+kisw+eng+coding+math+geo)/7.0;
printf("%.2f\n",average);

if(average>=70&&average<=100)
{printf("Grade A");}
if(average>=60&&average<=69)
{printf("Grade B");}
if(average>=50&&average<=59)
{printf("Grade C");}
if(average>=40&&average<=49)
{printf("Grade D");}
if(average>=0&&average<=39)
{printf("Grade E");}

return 0;
}
