//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>

enum Light { RED, YELLOW, GREEN };

int main() {
    enum Light s = RED;

    if (s == RED) printf("Stop");
    else if (s == YELLOW) printf("Wait");
    else printf("Go");

    return 0;
}
