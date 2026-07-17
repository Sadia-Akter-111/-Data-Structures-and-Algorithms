
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *a = (int *)malloc(sizeof(int) * n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];

    float average = (float)sum / n;

    printf("Average is: %.2f\n", average);

    free(a);

    return 0;
}
