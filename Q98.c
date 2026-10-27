#include <stdio.h>

int main() {
    char name[100];
    int i = 0, lastSpace = -1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Find the last space
    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] == ' ') {
            lastSpace = i;
        }
        i++;
    }

    // Print first initial
    printf("%c. ", name[0]);

    // Print middle name initials
    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && i != lastSpace) {
            printf("%c. ", name[i + 1]);
        }
    }

    // Print surname in full
    for (i = lastSpace + 1;
         name[i] != '\0' && name[i] != '\n';
         i++) {
        printf("%c", name[i]);
    }

    return 0;
}