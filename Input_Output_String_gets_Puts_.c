#include<stdio.h>
#include<string.h>
int main()
{
    char s[30];
    printf("Please enter a sentence:");
    gets(s);
    puts("You have entered:");
    puts(s);

    char s1[80]="To be or not to be that is the question";
    puts(s1);


    return 0;
}
