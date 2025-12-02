//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[200], word[200], longest[200];
    int i = 0, j = 0, max = 0;

    fgets(s, sizeof(s), stdin);

    for (; ; i++) {
        if (s[i] != ' ' && s[i] != '\0' && s[i] != '\n') {
            word[j++] = s[i];
        } else {
            word[j] = '\0';
            if (j > max) {
                max = j;
                strcpy(longest, word);
            }
            j = 0;
            if (s[i] == '\0')
                break;
        }
    }

    printf("%s", longest);
    return 0;
}
