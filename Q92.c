#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {

        if (str[i] >= 'a' && str[i] <= 'z') {

            if (freq[str[i] - 'a'] == 1) {
                printf("First repeating lowercase alphabet = %c\n", str[i]);
                return 0;
            }

            freq[str[i] - 'a']++;
        }

        i++;
    }

    printf("No repeating lowercase alphabet found.\n");

    return 0;
}