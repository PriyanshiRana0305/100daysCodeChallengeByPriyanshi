//Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main() {
    int c;
    printf("Enter the temperature in celsius : ");
    scanf("%d",&c);
    int f;
    f = (c*1.8)+32;
    printf("The temperature in farenheit is %d\n");
}
