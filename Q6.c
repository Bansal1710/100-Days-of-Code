#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a != b) {
        temp = a;
        a = b;
        b = temp;

        printf("After swapping:\n");
        printf("a = %d\n", a);
        printf("b = %d\n", b);
    }
    else {
        printf("Both numbers are equal, so no swapping is needed.\n");
    }

    return 0;
}
