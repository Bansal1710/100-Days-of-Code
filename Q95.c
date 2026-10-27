#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int len1 = 0, len2 = 0;
    int i, j, match;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Find lengths
    while (str1[len1] != '\0')
        len1++;

    while (str2[len2] != '\0')
        len2++;

    // Lengths must be equal
    if (len1 != len2) {
        printf("Not a rotation\n");
        return 0;
    }

    // Try every possible rotation
    for (i = 0; i < len1; i++) {
        match = 1;

        for (j = 0; j < len1; j++) {
            if (str1[(i + j) % len1] != str2[j]) {
                match = 0;
                break;
            }
        }

        if (match == 1) {
            printf("Strings are rotations of each other\n");
            return 0;
        }
    }

    printf("Strings are not rotations of each other\n");

    return 0;
}