#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
    char alpha;
    scanf("%c",&alpha);
    if (alpha >= 'a' && alpha <= 'z' || alpha >= 'A' && alpha <= 'Z')
    {
        alpha = tolower(alpha);
        if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
        {
            printf("Vowel.\n");
        }
        else
        {
            printf("Consonant.\n");
        }
    }
    else
    {
        printf("Not an alphabet.\n");
    }
    
    return 0;
}

