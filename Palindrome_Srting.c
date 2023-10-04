#include<stdio.h>
main()
{
    char s[80],t[80];
    int length, i, j,c = 0;
    gets(s);
    length = strlen(s);
    j = 0;
    for(i = length-1; i >= 0; i--)
    {
        t[j] = s[i];
        j++;
    }
    for(i = 0; i < length; i++)
    {

            if(s[i] == t[i])
            {
                c++;
            }
    }
    if(c == length)
       printf("Palindrome");
    else
       printf("No");


}
