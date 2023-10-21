//C program to remove extra blank spaces from a given string.

#include <stdio.h>
#include <stdlib.h>

char * removeBlanks(const char * str)
{
    int i, j;
    char * newString;

    newString = (char *)malloc(100);

    i = 0;
    j = 0;

    while(str[i] != '\0')
    {
        /* If blank space is found */
        if(str[i] == ' ')
        {
            newString[j] = ' ';
            j++;

            /* Skip all consecutive spaces */
            while(str[i] == ' ')
                i++;
        }

        newString[j] = str[i];

        i++;
        j++;
    }
    // NULL terminate the new string
    newString[j] = '\0';

    return newString;
}

int main()
{
    char str[100];
    char * newString;

    printf("Enter any string: ");
    gets(str);

    newString = removeBlanks(str);

    printf("%s", newString);

    return 0;
}
