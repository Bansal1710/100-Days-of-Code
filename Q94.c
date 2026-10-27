#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start = 0;
    int length = 0, maxLength = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {

        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            length++;
        }
        else {
            if (length > maxLength) {
                maxLength = length;
                maxStart = start;
            }

            length = 0;
            start = i + 1;
        }

        if (str[i] == '\0' || str[i] == '\n') {
            break;
        }

        i++;
    }

    printf("Longest word: ");

    for (i = maxStart; i < maxStart + maxLength; i++) {
        printf("%c", str[i]);
    }

    printf("\nLength = %d\n", maxLength);

    return 0;
}