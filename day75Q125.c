//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    printf("Enter line to append: ");
    fgets(line, sizeof(line), stdin);
    fgets(line, sizeof(line), stdin);

    fputs(line, fp);

    fclose(fp);

    printf("Text appended successfully!");
    return 0;
}
