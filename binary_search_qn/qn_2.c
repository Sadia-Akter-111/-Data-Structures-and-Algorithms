/*find squre root usig the binary search algorithms*/
#include <stdio.h>

int main()
{
    int low = 0, high = 144;
    int target = 144;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int value = mid * mid;

        if (value == target)
        {
            printf("Square root = %d\n", mid);
            return 0;
        }
        else if (value < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("No integer square root found.\n");

    return 0;
}
