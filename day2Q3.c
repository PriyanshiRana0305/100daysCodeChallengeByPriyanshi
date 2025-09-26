//Q3 Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main() {
    int l,b;
     printf("enter the length of the rectangle: ");
     scanf("%d",&l);
     printf("enter the breadth of the rectangle: ");
     scanf("%d",&b);

    int perimeter;
    perimeter = 2*(l+b);
    printf("the perimeter of the rectangle is %d\n",perimeter);
    int area;
    area = l*b;
    printf("\nthe area of the rectangle is %d",area);

    return 0;
    

} 