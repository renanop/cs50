#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get a positive number from user
    int height, width;
    do
    {
        height = get_int("Positive Number: ");
        width = height;
    }
    while (height < 0 || height > 23);

    // Print as many rows
    for (int i = 0; i < height; i++)
    {
        // Relation between hashtags and spaces
        int num_hash = i + 1;
        int num_spaces = height - num_hash;

        // Building columns with separated for loops
        for (int j = 0; j < num_spaces; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < num_hash; k++)
        {
            printf("#");
        }
        for (int l = 0; l < 2; l++)
        {
            printf(" ");
        }
        for (int m = 0; m < num_hash; m++)
        {
            printf("#");
        }
        printf("\n");
    }

}
