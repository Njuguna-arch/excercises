//program to calculate library fine amount
#include <stdio.h>
/*program for library fine amounts
author: Joseph
Date: 21 Oct 2024*/
int main()
{
    int book_ID;
    int due_date;
    int return_date;
    int fine_rate,FR;
    int days_overdue,DO;
    int fine_amount, FA;
//prompt user to enter book ID
    printf("Enter the book ID:\n", book_ID);
    scanf("%d", &book_ID);
//prompt user to enter the due date
    printf("Enter the due date:\n", due_date);
    scanf("%d", &due_date);
//prompt user to enter return date
    printf("Enter the return date:\n", return_date);
    scanf("%d", &return_date);
//calculate the days overdue
    DO = return_date - due_date;
   printf("The days overdue are: %d\n", DO);
// using if....else statements
    if(DO<=0){
        printf("No fine, book returned on time");
    }
        else if(DO<=7)
        {
        printf("The fine rate is: 20\n",FR=20);}

    else if(DO>=8 && DO<=15)
    {
        printf("The fine rate is: 50\n",FR=50);
    }
    else
    {
        printf("The fine rate is: 100\n",FR=100);
    }
//calculate the fine amount
    FA = (DO * FR);
    printf("The Fine amount is: %d", FA);


    return 0;
}
