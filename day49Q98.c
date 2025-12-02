//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);

    int len = strlen(s);
    if (s[len-1] == '\n') s[len-1] = '\0';

    char *p = s;
    char *last = strrchr(s, ' ');

    while (p < last) {
        if (*p != ' ' && (p == s || *(p-1) == ' '))
            printf("%c.", toupper(*p));
        p++;
    }

    printf(" %s", last + 1);
    return 0;
}
