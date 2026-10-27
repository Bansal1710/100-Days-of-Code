#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;
    int palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Check palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
        printf("String is a palindrome.");
    else
        printf("String is not a palindrome.");

    return 0;
}