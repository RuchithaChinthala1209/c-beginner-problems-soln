// create a function to check its palindrome or not
#include <stdio.h>
#include <string.h>

void palindrome(char name[20])
{
    int len = strlen(name);
    char new[20];
    int i;

    for(i = 0; i < len; i++)
    {
        new[i] = name[len - i - 1];
    }
    new[len] = '\0';  // Null-terminate the reversed string

    if(strcmp(name, new) == 0)
    {
        printf("It is a palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }
}

int main()
{
    palindrome("madam");
    return 0;
}

