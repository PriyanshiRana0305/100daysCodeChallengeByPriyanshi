//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
#include <string.h>

int main() {
    char d[3], m[3], y[5];
    scanf("%2s/%2s/%4s", d, m, y);

    char month[10];

    if (strcmp(m, "01") == 0) strcpy(month, "Jan");
    else if (strcmp(m, "02") == 0) strcpy(month, "Feb");
    else if (strcmp(m, "03") == 0) strcpy(month, "Mar");
    else if (strcmp(m, "04") == 0) strcpy(month, "Apr");
    else if (strcmp(m, "05") == 0) strcpy(month, "May");
    else if (strcmp(m, "06") == 0) strcpy(month, "Jun");
    else if (strcmp(m, "07") == 0) strcpy(month, "Jul");
    else if (strcmp(m, "08") == 0) strcpy(month, "Aug");
    else if (strcmp(m, "09") == 0) strcpy(month, "Sep");
    else if (strcmp(m, "10") == 0) strcpy(month, "Oct");
    else if (strcmp(m, "11") == 0) strcpy(month, "Nov");
    else if (strcmp(m, "12") == 0) strcpy(month, "Dec");

    printf("%s-%s-%s", d, month, y);
    return 0;
}
