//program to check whether a number is even or odd

#include <stdio.h>
/*Even/Odd number checker
author Joseph
Date 15th Oct 2024*/

int main(){
int quotient, r;
int Number, N;
 printf("enter a number, N\n");
 scanf("%d", &N);
        r = N % 2;
if (r==0){
printf("Even");
}
else {
printf("Odd");
}
return 0;
}
