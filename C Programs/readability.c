// this program checks the readability of a paragraph
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
typedef char *string;


int charlenth(string f);
int words(string f);
int sen(string f);
int main(void)
{
    string s = NULL ;
         scanf("%*[/n]%[*\n]",s);
    // declareing variables
    float Le = charlenth(s);
    float Wo  = words(s);
    float se = sen(s);
    float L = (Le / Wo) * 100;
    float S = (se / Wo) * 100 ;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int ans = round(index);

    if (ans >= 16)
    {
        printf(" Grade 16+\n");
    }
    else if (ans <= 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf(" Grade %d\n", ans);
    }
}


int sen(string f) //to count sentances
{
    int i, z = 0;
    for (i = 0 ; i < strlen(f) ; i++) 
    {

        if (f[i] == '.' || f[i] == '?' || f[i] == '!')
        {
            z += 1 ;

        }


    }

    return z;
}



//to count words
int words(string f)
{
    int i, z = 0;
    for (i = 0 ; i < strlen(f) ; i++)
    {
        int str = isspace(f[i]);

        if (str != 0 || f[i] == '\0')
        {
            z += 1 ;

        }


    }

    return z + 1;
}

// to count letters
int charlenth(string f)
{
    int i, z = 0;
    for (i = 0 ; i < strlen(f) ; i++)
    {
        int str = isspace(f[i]);

        if ((f[i] >= 'a' && f[i] <= 'z') || (f[i] >= 'A' && f[i] <= 'Z'))
        {
            z += 1 ;

        }


    }

    return z;

}