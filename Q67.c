#include <stdio.h>

int main() {
    int a[10], n, i, element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    printf("Enter position: ");
    scanf("%d", &pos);

    // Shift elements to the right
    for (i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    // Insert element
    a[pos - 1] = element;

    n++;

    printf("Array after insertion:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
