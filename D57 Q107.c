#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], stack[n], top = -1;

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous Greater Elements: ");

    for (int i = 0; i < n; i++) {

        while (top >= 0 && stack[top] <= arr[i]) {
            top--;
        }
        if (top == -1)
            printf("-1");
        else
            printf("%d", stack[top]);

        stack[++top] = arr[i];

        if (i != n - 1)
            printf(", ");
    }

    return 0;
}
