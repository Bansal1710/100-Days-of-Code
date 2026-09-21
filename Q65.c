#include <stdio.h>

int main() {
    int a[5], i, key;
    int low = 0, high = 4, mid;
    int found = 0;

    printf("Enter 5 elements in sorted order:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == key) {
            found = 1;
            break;
        }
        else if (key < a[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (found == 1)
        printf("Element found at position %d\n", mid + 1);
    else
        printf("Element not found\n");

    return 0;
}
