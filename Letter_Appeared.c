/* Write down a program that prints how many times a
letter appeared in a sentence. Both letter and
sentence will be input to your program.*/

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],t;
    int i,length,count=0;
    printf("String is:");
    gets(s);
    printf("Which letter?");
    scanf("%c",&t);
    length=strlen(s);
    for(i=0; i<length; ++i)
    {
        if(s[i] == t){
            count++;
        }

    }
    if(count==0)printf("sorry not found");
    else printf("found at position: %d",count);
}
