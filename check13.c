#include <stdio.h>

int main()
{
    int days;
    float fine;

    printf("Enter the number of days: ");
    scanf("%d",&days);

    if(days <= 5)
    {
        fine = days * 2;
        printf("Fine = $%.2f", fine);
    }
    else if (days <= 10)
    {
        fine = (5 * 2) + ((days - 5) * 3);
        printf("Fine = $%.2f", fine);
    }
    else if (days <= 15)
    {
        fine = (5 * 2) + (5 * 3) + ((days - 10) * 4);
        printf("Fine = $%.2f", fine);
    }
    else 
    {
        printf("Membership cancelled");
    }
    return 0;
}
