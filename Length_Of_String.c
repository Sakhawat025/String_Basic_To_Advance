/*Length of String*/

#include<stdio.h>
#include<string.h>
int main()
{
    // Using While loop with out library function.


    /*char s[1000];
    int count=0;

    printf("Input a String\n");
    gets(s);

    while(s[count]!='\0')
        count++;
    printf("Length of String is :%d\n",count);

    return 0;*/


    //Using for Loop with out library function.

    /*char s[1000];
    int i,count=0;

    printf("Input a String\n");
    gets(s);

    for(i=0;i<s[i];i++)        //for(i=0;s[i]!='\0';++i)
        if(s[count]!='\0')
        count++;
    printf("Length of String is :%d\n",count);

    return 0;*/


    //Using do while Loop with out library function.

    /*char s[1000];
    int count=0;

    printf("Input a String\n");
    gets(s);

    do
    {
        count++;

    }while(s[count]!='\0');

    printf("Length of String is :%d\n",count);

    return 0;*/


    // Using Library Function.Sa

    char s[1000];

    printf("Input a String\n");
    gets(s);

    printf("Length of String is :%d\n",strlen(s));

    return 0;

}



