// String with spaces removed.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], strOut[100];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '\t') {
            strOut[j] = str[i];
            j++;
        }
    }

    strOut[j] = '\0';

    printf("String with spaces and blanks removed: %s\n", strOut);

    return 0;
}

