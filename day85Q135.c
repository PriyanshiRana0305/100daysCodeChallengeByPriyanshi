//Q135: Assign explicit values starting from 10 and print them.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/
#include <stdio.h>

enum Example { A=10, B, C, D };

int main() {
    printf("%d %d %d %d", A, B, C, D);
    return 0;
}
