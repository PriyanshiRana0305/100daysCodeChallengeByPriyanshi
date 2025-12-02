//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>

enum Status { SUCCESS=1, FAILURE=0, TIMEOUT=-1 };

int main() {
    enum Status s = TIMEOUT;

    if (s == SUCCESS) printf("Operation successful");
    else if (s == FAILURE) printf("Operation failed");
    else printf("Operation timed out");

    return 0;
}