/* String Input and Output : Read a string */

#include<stdio.h>
#define size 10
int main()
{
    // With out space.

    /*char name[20];
    printf("Enter name:");
    scanf("%s",name);
    printf("Your name is %s.",name);

    return 0;*/


    // With space and gets.

    /*char name[10];
    printf("Enter name:");
    gets(name);
    printf("\nYour name is %s.",name);

    return 0;*/

    // define size.

    /*char name[size];
    printf("Enter name:");
    fgets(name,size,stdin);
    printf("\nYour name is:%s.",name);

    return 0;*/

    //Using %[^\n]s inside scanf.

    char str[10];
    scanf("%[^\n]s",str);
    printf("%s",str);
    return 0;

}
