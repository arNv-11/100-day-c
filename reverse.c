#include <stdio.h>

int main()
{
    int n, reverse = 0, reaminder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        reaminder = n % 10;
        reverse = reverse * 10 + reaminder;
        n /= 10;
    }

    printf("Recersed = %d\n", reverse);

    return 0;
}
