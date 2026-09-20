#include <stdio.h>

int main() {
    int n, first, last, temp, digits = 0, power = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Number of digits count karna
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    // First digit nikalna
    temp = n;
    for (int i = 1; i < digits; i++) {
        temp = temp / 10;
    }
    first = temp;

    // Last digit nikalna
    last = n % 10;

    // 10^(digits-1) nikalna
    for (int i = 1; i < digits; i++) {
        power = power * 10;
    }

    // First aur last digit swap
    result = last * power;

    temp = n % power;
    temp = temp / 10;

    result = result + temp * 10 + first;

    printf("Number after swapping = %d\n", result);

    return 0;
}
