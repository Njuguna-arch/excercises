//program to use booleans
#include <stdio.h>
#include <stdbool.h>

int main(){
int myAge =20;
int votingAge = 18;

printf("%d\n", myAge>= votingAge);

if (myAge >= votingAge){
printf("Old enough to vote!");
} else{
printf("Not old enough to vote.");
}
return 0;
}
