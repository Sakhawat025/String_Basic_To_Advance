#include<stdio.h>

int Same(char str[],char str1[])
{
    for(int i=0; str[i]!='\0' && str1[i]!='\0';++i){
        if(str[i]!=str1[i]){
            return 0;
        }
    }

    for(int i=0; str[i]!='\0' && str1[i]!='\0';++i){
        if(str[i]=str1[i]){
            return 1;
        }
    }

}

int main()
{
    char str[100],str1[100];
    int result;

    printf("Enter the first string:");
    gets(str);
    printf("Enter the second string:");
    gets(str1);

    result=Same(str,str1);

    if(result==1){
        printf("The string are the same.\n");
    }else
    {
        printf("The string are different.\n");
    }

    return 0;


}
