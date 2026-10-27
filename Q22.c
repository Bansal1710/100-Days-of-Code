#include <stdio.h>

int main() {
    float cp, sp, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        // Calculate profit percentage
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit %.2f%%\n", percentage);
    } else if (cp > sp) {
        // Calculate loss percentage
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss %.2f%%\n", percentage);
    } else {
        // Cost price equals selling price
        printf("No Profit No Loss\n");
    }

    return 0;
}   