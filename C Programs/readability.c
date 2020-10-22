#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

int countletters(string text);
int countwords(string text);
int countsentences(string text);


int main(void)
{
    string text = get_string("Text: ");

    int letters = countletters(text);
    int words = countwords(text);
    int sentences = countsentences(text);

    printf("%i\n", letters);
    printf("%i\n", words);
    printf("%i\n", sentences);

    float score = 0.0588 * (100 * (float) letters / (float) words) - 0.296 * (100 * (float) sentences / (float) words) - 15.8;

    if (score < 16 && score >= 0)
    {
        printf("Grade %i\n", (int) round(score));
    }
    else if (score >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }
}

int countletters(string text)
{
    int letters = 0;
    // Check if string is empty
    if (text[0] == '\0')
    {
        return 0;
    }
    // Count only letters in the string
    for (int i = 0; text[i]; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

int countwords(string text)
{
    int spaces = 1;
    for (int i = 0; text[i]; i++)
    {
        if (isspace(text[i]))
        {
            spaces++;
        }
    }
    return spaces;
}

int countsentences(string text)
{
    int sentences = 0;
    for (int i = 0; text[i]; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}
