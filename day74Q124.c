//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    char src[50], dest[50];
    FILE *fs, *fd;
    char ch;

    scanf("%s %s", src, dest);

    fs = fopen(src, "r");
    if (fs == NULL) {
        printf("Source file not found!");
        return 1;
    }

    fd = fopen(dest, "w");

    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);

    printf("File copied successfully.");
    return 0;
}
