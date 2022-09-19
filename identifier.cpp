#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[50];
    int count = 0, i;
    printf("Enter the String: ");
    gets(string);
    // int len=strlen(string);
    // printf("length:%d",len);
    if ((string[0] >= 'a' && string[0] <= 'z') || (string[0] >= 'A' && string[0] <= 'Z') || (string[0] == '_') || (string[0] == '$'))
    {
        for (i = 1; i <= strlen(string); i++)
        {
            if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= '0' && string[i] <= '9') || (string[i] == '_'))
            {
                count++;
            }
        }
    }
    if (count == (strlen(string) - 1))
    {
        printf("Input string is a valid identifier");
    }
    else
    {
        printf("Input string is not a valid identifier");
    }
    return 0;
}