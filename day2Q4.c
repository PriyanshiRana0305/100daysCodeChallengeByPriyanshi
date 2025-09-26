//Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main() {
   int r;
    printf("enter the radius of circle = ");
    scanf("%d",&r);

    int area,circumference;
    area = 3.14*r*r;
    circumference = 2*3.14*r;
    printf("the area of the circle is %d\n",area);
    printf("the circumference of the circle is %d\n",circumference);

    return 0;
}