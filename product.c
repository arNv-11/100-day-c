#include <stdio.h>

int main()
{
    long long product = 1;
    int i;

    for (i = 2; i <= 100; i += 2)
    {
        product = product * i;
    }

    printf("Product of even numbers from 1 to 100 = %lld", product);

    return 0;
}
