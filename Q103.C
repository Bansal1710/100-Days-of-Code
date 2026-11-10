#include <stdio.h>

int main()
{
    int n;
    int total = 0, left = 0;
    int pivot = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total = total + arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        total = total - arr[i];

        if(left == total)
        {
            pivot = i;
            break;
        }

        left = left + arr[i];
    }

    printf("%d", pivot);

    return 0;
}