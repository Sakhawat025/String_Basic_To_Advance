/* Write down a program that prints how many words,
letters, vowels and consonants exist in a sentence.
The sentence will be input to your program.*/

#include<stdio.h>
int main()
{
    char s[80],t;
    int w, v, c, l, i,length;
    printf("Enter a Sentence:");
    gets(s);
    length = strlen(s);
    w = v = c = 0;
    for(i = 0; i < length; i++)
    {
        t = tolower(s[i]);
        if(t == ' ') w++;
        else if ((t == 'a') || (t == 'e') ||
                 (t == 'i') || (t == 'o') || (t == 'u'))
            v++;
        else c++;
    }
    printf("Number of words: %d \n",w+1);
    printf("Number of letters: %d \n",v+c);
    printf("Number of vowels: %d \n",v);
    printf("Number of consonants: %d \n",c);


}

