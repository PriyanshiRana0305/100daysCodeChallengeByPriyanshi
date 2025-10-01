//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main(){
    int n;
    printf("enter the time in seconds:");
    scanf("%d",&n);
    int hour,minutes,seconds;
    hour = n/3600;
    minutes = (n % 3600 )/ 60;
    seconds = n % 60;


    printf("the time is: %d:%d:%d\n",hour,minutes,seconds);

    return 0;

}