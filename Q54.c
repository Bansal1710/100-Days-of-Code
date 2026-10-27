#include <stdio.h>

int main() {
    int i, j;

    // Upper half
    for (i = 1; i <= 4; i++) {

        // Spaces
        for (j = i; j < 4; j++) {
            printf(" ");
        }

        // Stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half
    for (i = 3; i >= 1; i--) {

        // Spaces
        for (j = 4; j > i; j--) {
            printf(" ");
        }

        // Stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
