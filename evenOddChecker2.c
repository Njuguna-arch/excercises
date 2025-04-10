int numCheck(){
    int quotient, q;
    int number, n;
        //prompt user to enter a number
    printf("Enter any number: \n", n);
    scanf("%d", &n);
    q = n % 2;

    if(q == 0){
        printf("%d is Even",n);
    }
    else{
        printf("%d is odd", n);
    }
    return q;
}
int main(){
// call the function
 numCheck();
 return 0;
}
