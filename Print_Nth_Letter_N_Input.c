/* Write down a program that will print n-th letter in a
 sentence entered by a user.n will be input to your program.*/

#include<stdio.h>
#include<string.h>
int main()
{
    char Letter[100];
    printf("Enter the string:");
    gets(Letter);
    printf("%s",Letter);
    int length=strlen(Letter);
    int n;
    printf("Total char in sentence is:%d",length);
    printf("which position ?");
    scanf("%d",&n);
    if(n<length)
    {
        printf("The letter is: %c",Letter[n]);
    }
    else
    {
        printf("No letter at such position");
    }



}
