//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r = ADMIN;

    switch (r) {
        case ADMIN: printf("Admin Privileges Granted"); break;
        case USER: printf("User Access"); break;
        case GUEST: printf("Guest Access Only"); break;
    }

    return 0;
}
