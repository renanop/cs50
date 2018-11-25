#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define UPPER 65
#define LOWER 97
#define ALPHABET 26



int main(int argc, string argv[])
{
    // Getting the alphabetical key.
    if (argc != 2)
    {
        printf("Error! Please pass only the value of the alphabetical key.\n");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Error! The key should have only alphabetical characters.\n");
            return 1;
        }
    }

    // We don't want the key to be case sensitive
    for (int j = 0, m = strlen(argv[1]); j < m; j++)
    {
        argv[1][j] = toupper(argv[1][j]);
    }

    string key = argv[1];
    string s = get_string("plaintext: ");
    // Até aqui tá certo.


    //The first print of the output must be outside the loop.
    printf("ciphertext: ");
    int count = 0;
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // Three possibilites: Upper case, lower case, or any other different character
        if (isupper(s[i]))
        {
            int character = (s[i] - UPPER + (key[count] - UPPER)) % ALPHABET;
            int ascii = character + UPPER;
            count++;
            printf("%c", ascii);
        }
        else if (islower(s[i]))
        {
            int character = (s[i] - LOWER + (key[count] - UPPER)) % ALPHABET;
            int ascii = character + LOWER;
            count++;
            printf("%c", ascii);
        }
        else
        {
            printf("%c", s[i]);
        }
        if (key[count] == '\0')
        {
            count = 0;
        }
    }
    // Last, but not least, the line break.
    printf("\n");
    return 0;
}
