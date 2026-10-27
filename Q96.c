#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start, end;
    char temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {

        // Skip spaces
        if (str[i] == ' ') {
            i++;
            continue;
        }

        // Find starting position of word
        start = i;

        // Find ending position of word
        while (str[i] != ' ' &&
               str[i] != '\0' &&
               str[i] != '\n') {
            i++;
        }

        end = i - 1;

        // Reverse current word
        while (start < end) {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }
    }

    printf("Result: %s", str);

    return 0;
}