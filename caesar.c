#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int zmien(string text1, int key)
{
    printf("ciphertext: ");
    for (int i=0; i<strlen(text1); i++)
    {
        if (islower(text1[i]))
        {
            printf("%c", (((text1[i] + key) - 97) % 26) + 97);
        }
        else if(isupper(text1[i]))
        {
            printf("%c", (((text1[i] + key) - 65) % 26) + 65);
        }
        else
        {
            printf("%c", text1[i]);
        }
    }
    printf("\n");
    return 0;
}

int main(int argc, string argv[])
{
    
    string argument = argv[1];
    int goodkey = 0;
    if (argc!=2)
    {
        printf("Usage: ./ceasar key\n");
        return 1;
    }
    else
    {
        for (int i=0; i<strlen(argument); i++)
        {
    
        if(isdigit(argument[i]))
        {
            goodkey = goodkey + 0;
        }
        else
        {
            goodkey = goodkey +1;
        }
        }
        if (argc==2 && goodkey==0)
    {
        int argument1 = atoi(argument);
        string text = get_string("plaintext: ");
        zmien(text, argument1);
        return 0;
    }
    else
    {
        printf("Usage: ./ceasar key\n");
        return 1;
    }
    }
    
}
