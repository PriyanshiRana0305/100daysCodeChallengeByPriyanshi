//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *s;

    s = (struct Student*) malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    scanf("%s", s->name);
    scanf("%d", &s->roll);
    scanf("%f", &s->marks);

    printf("Name: %s | Roll: %d | Marks: %.0f", s->name, s->roll, s->marks);

    free(s);

    return 0;
}
