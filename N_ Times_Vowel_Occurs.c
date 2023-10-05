/* Given a text in lowercase, print the number 
of times each vowel occurs in it.*/


#include <stdio.h>
#include <string.h>

int main() {
    char text[1000];
    int vowelCount[5] = {0};
    gets(text);

    for (int i = 0; text[i] != '\0'; i++) {
        switch (text[i]) {
            case 'a':
                vowelCount[0]++;
                break;
            case 'e':
                vowelCount[1]++;
                break;
            case 'i':
                vowelCount[2]++;
                break;
            case 'o':
                vowelCount[3]++;
                break;
            case 'u':
                vowelCount[4]++;
                break;
        }
    }
    printf("a%d", vowelCount[0]);
    printf("e%d", vowelCount[1]);
    printf("i%d", vowelCount[2]);
    printf("o%d", vowelCount[3]);
    printf("u%d", vowelCount[4]);

    return 0;
}
