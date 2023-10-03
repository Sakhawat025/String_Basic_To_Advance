/*Write down a program that will print letters of a
sentence in a vertical line.Add delay as needed.*/

#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
    char str[100];
    printf("Enter String:");
    gets(str);
    printf("%s",str);
    int length=strlen(str);
    printf("Enter the vertical line.\n");
    //for(int i=0; str[i]!='\0'; ++i)
    for(int i=0;i<length;++i)
    {
        printf(" %c\n",str[i]);
        sleep(500);
    }

}
