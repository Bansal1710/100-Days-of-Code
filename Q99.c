#include <stdio.h>

int main() {
    int day, month, year;

    printf("Enter date (dd/04/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month == 4) {
        printf("%02d-Apr-%d\n", day, year);
    } else {
        printf("Invalid month\n");
    }

    return 0;
}