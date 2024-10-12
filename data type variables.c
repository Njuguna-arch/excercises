//program to print data types
/*data types
author JOseph
date 12\10\24 */
#include <stdio.h>
int main(){
//create variables of different types
    int items = 30;
    float cost_per_item = 8.5;
    float total_cost = items*cost_per_item;
    char currency = '$';

    printf("Number of items: %d\n", items);
    printf("cost per item : %.2f %c\n", cost_per_item, currency);
    printf("Total cost = %.2f %c\n", total_cost, currency);
return 0;

}
