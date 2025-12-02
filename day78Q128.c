//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int v = 0, c = 0;

    fp = fopen("text.txt", "r");

    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            char x = tolower(ch);
            if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
                v++;
            else
                c++;
        }
    }

    printf("Vowels: %d\nConsonants: %d", v, c);

    fclose(fp);
    return 0;
}
