#include <stdio.h>

int main() {
    char name[100];
    int i;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Print first character
    printf("%c", name[0]);

    // Print character after every space
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c", name[i + 1]);
        }
    }

    return 0;
}