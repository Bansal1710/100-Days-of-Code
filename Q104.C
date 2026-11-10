#include <stdio.h>

int main()
{
    int n;
    int left, right;
    int pivot = -1;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int x = 1; x <= n; x++)
    {
        left = 0;
        right = 0;

        for(int i = 1; i <= x; i++)
        {
            left = left + i;
        }

        for(int i = x; i <= n; i++)
        {
            right = right + i;
        }

        if(left == right)
        {
            pivot = x;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}