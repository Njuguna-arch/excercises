//program to calculate average
#include <stdio.h>

double avg()
{
    double sum=0.0;
    double number;
    //read ten decimals
    printf("Enter ten decimal numbers:\n");
    for(int i=0;i<10;i++){
            scanf("%lf",&number);//read a decimal number
    sum+=number; //adds the numbers to the sum

    }
       //calculate and return the average
       return sum/10;
}
int main(){
//call the avg function to calculate the average of ten numbers
double average = avg();
//output the calculated average
printf("The average is:%.2f\n",average);

return 0;
}
