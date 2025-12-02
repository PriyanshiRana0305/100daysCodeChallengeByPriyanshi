//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main() {
    char s[100];
    int freq[26] = {0};

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            int idx = s[i] - 'a';
            freq[idx]++;
            if (freq[idx] == 2) {
                printf("%c", s[i]);
                return 0;
            }
        }
    }

    printf("-1");
    return 0;
}
