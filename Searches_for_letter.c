/*Write down a program that searches for a letter in a
sentence.Both letter and sentence will be input to your program.
Print last position of the letter found in the sentence.*/

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],t;
    int i,length,p;
    printf("String is:");
    gets(s);
    printf("Which letter?");
    scanf("%c",&t);
    length=strlen(s);
    p=-1;

    for(i=0; i<length; ++i)
    {
        if(s[i] == t)
            p=i;
    }
    if(p == -1)printf("sorry not found");
    else printf("found at position: %d",p);
}


