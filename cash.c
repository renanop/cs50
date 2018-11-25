#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars;
    int cents, ncoin = 0, quarter = 25, dime = 10, nickel = 5, penny = 1;
    do
    {
        dollars = get_float("What is the change? ");
        cents = round(dollars * 100);

    }
    while (dollars < 0);

    // Greedy algo.
    if (cents >= quarter)
    {
        ncoin = ncoin + cents / quarter;
        cents = cents % quarter;
    }
    if (cents >= dime)
    {
        ncoin = ncoin + cents / dime;
        cents = cents % dime;
    }
    if (cents >= nickel)
    {
        ncoin = ncoin + cents / nickel;
        cents = cents % nickel;
    }
    if (cents >= penny)
    {
        ncoin = ncoin + cents / penny;
        cents = cents % penny;
    }

    printf("%i\n", ncoin);
}