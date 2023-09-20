/* Find length of string using Function*/

#include<stdio.h>

void displayString(char str[])
{
    printf("Length of String is :%d\n",strlen(str));
}

int main()
{
    char str[1000];
    gets(str);
    displayString(str);
    return 0;

}
