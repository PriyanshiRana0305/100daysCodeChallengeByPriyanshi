//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
int main() {
    int principal,time,rate;
    printf("enter the principal amount:");
    scanf("%d",&principal);
    printf("Enter the annual interest rate:");
    scanf("%d",&rate);
    printf("enter the time period in years:");
    scanf("%d",&time);

    int simple_interest,compound_interest;
    simple_interest = (principal * rate * time )/ 100;
    compound_interest = (principal * (1+rate/100),time) - principal;
    printf("Principal amount: %d\n",principal);
    printf("annual interest rate: %d\n",rate);
    printf("Time period : %d\n",time);
    printf("simple interest : %d\n",simple_interest);
    printf("compound interest: %d\n",compound_interest);
    return 0;


}