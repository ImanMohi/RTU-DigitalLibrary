#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cs50.h>


int main(int argc, string argv[])
{
    if (argv[1] != NULL && isdigit(*argv[1]) && argc == 2)
    {
        int key = atoi(argv[1]);
        string text = get_string("plaintext: ");
        if (text == '\0')
        {
            printf("ciphertext: ");
            return 0;
        }
        printf("ciphertext: ");

        // Encipher text
        for (int i = 0; text[i]; i++)
        {
            if (isalpha(text[i]))
            {
                // check for lower or upper case
                if isupper(text[i])
                {
                     printf("%c", (((text[i] - 'A') + key) % 26) + 'A');
                }
                else
                {
                    printf("%c", (((text[i] - 'a') + key) % 26) + 'a');
                }
            }
            else
            {
                printf("%c", text[i]);
            }
        }
       printf("\n");
       return 0;
    }
    else
    {
        printf("Usage %s key\n", argv[0]);
        return 1;
    }
}
