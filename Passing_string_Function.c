/* Passing string to a Function.*/

#include<stdio.h>
#define size 10

void displayString(char str[])
{
    printf("String Output from Function:");
    puts(str);
}

int main()
{
    char str[size];
    printf("Enter string:");
    fgets(str,size,stdin);
    displayString(str);     // Passing string to function.

    return 0;

}

