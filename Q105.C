#include <stdio.h>

int main()
{
    int n, count;
    int majority = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for(int i = 0; i < n; i++)
    {
        count = 0;

        for(int j = 0; j < n; j++)
        {
            if(nums[i] == nums[j])
            {
                count++;
            }
        }

        if(count > n / 2)
        {
            majority = nums[i];
            break;
        }
    }

    printf("%d", majority);

    return 0;
}