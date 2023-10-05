/* A sample text is given to you as input. Remove all 
the digits from the text and print it.*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[1000];
   gets(text);

    int length = strlen(text);

    for (int i = 0; i < length; i++) {
        if (!isdigit(text[i])) {
            printf("%c", text[i]);
        }
    }

    return 0;
}

