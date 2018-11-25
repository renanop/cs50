#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get a positive number from user
    int n;
    do
    {
        n = get_int("Positive number: ");
    }
    while (n < 0 || n > 23);

    // Print that many rows
    for (int i = 0; i < n; i++)
    {
        // Print that many columns of blanks
        for (int j = 1; j < n - i; j++)
        {
            printf(" ");
        }
        // Print that many columns of hashtags
        for (int k = 0; k < i + 2; k++)
        {
            printf("#");
        }
        printf("\n");
    }

}
