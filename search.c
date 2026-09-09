#include <stdio.h>

int main()
{
    int arr[100], n, key, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("%d found at position %d", key, i + 1);
            break;
        }
    }

    if (i == n)
    {
        printf("%d not found in the array", key);
    }

    return 0;
}
