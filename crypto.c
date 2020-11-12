#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int k, caesar;

int main(int argc, string argv[])
{
    // check whether the command line argument has a valid length
    if (argc == 2)
    {
        // check whether the key is a valid string of numbers
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (isdigit(argv[1][i]))
            {
                k = atoi(argv[1]);
            }
            else
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }

        // prompt user for plaintext
        string s = get_string("plaintext: ");
        // print ciphertext
        printf("ciphertext: ");
        // loop through plaintext & change ASCII by k
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                caesar = ((s[i] - 97 + k) % 26) + 97;
                printf("%c", caesar);
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                caesar = ((s[i] - 65 + k) % 26) + 65;
                printf("%c", caesar);
            }
            else
            {
                printf("%c", s[i]);
            }
        }
        printf("\n");
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}