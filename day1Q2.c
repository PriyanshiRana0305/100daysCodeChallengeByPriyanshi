#include <stdio.h>
int main() {
    int a,b;
    printf("enter the first number: ");
    scanf("%d",&a);

    printf("enter the second number: ");
    scanf("%d",&b);

    int sum;
    sum = a + b;
    int product;
    product = a*b;
    int difference;
    difference = a-b;
    int quotient;
    quotient = a/b;
  

    printf("%d\n",sum);
    printf("%d\n",product);
    printf("%d\n",difference);
    if (b!=0)
        printf("%d\n",quotient);
    else 
        printf("division by zero isn't possible");
    
    return 0;

}
  