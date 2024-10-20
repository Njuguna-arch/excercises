//program to use switch to grade a student
#include <stdio.h>
int main()
{
int math;
int eng;
int kisw;
int bio;
int phy;
int geo;
int chem;
int average;

printf("enter marks for math:\n ");
scanf("%d",&math);
printf("enter marks for eng:\n");
scanf("%d",&eng);
printf("enter marks for kisw:\n");
scanf("%d",&kisw);
printf("enter marks for bio:\n");
scanf("%d",&bio);
printf("enter marks for phy:\n");
scanf("%d",&phy);
printf("enter marks for geo:\n");
scanf("%d",&geo);
printf("enter marks for chem:\n");
scanf("%d",&chem);
average = ((math*10) + (eng*10) + (kisw*10) + (bio*10) + (phy*10) + (geo*10) + (chem*10))/70;
printf("The average is: %d\n",average);

    switch (average)
{
case 70:

    case 71 ... 100:
    printf("Grade A");
    break;
case 60 ... 69:
    printf("Grade B");
    break;
case 50 ... 59:
    printf("Grade C");
    break;
case 40 ... 49:
    printf("Grade D");
    break;
case 0 ... 39:
    printf("Fail");
    break;
default:
    printf("invalid marks");
}

return 0;
}
