//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    fgets(s, sizeof(s), stdin);

    int start = 1;
    for (int i = 0; s[i] != '\0'; i++) {
        if (start && s[i] != ' ') {
            printf("%c.", toupper(s[i]));
            start = 0;
        }
        if (s[i] == ' ')
            start = 1;
    }

    return 0;
}
