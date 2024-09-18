#include <stdio.h>
#include <string.h>
int main()
{

    char str[100];

    printf("enter a string :");
    gets(str);

    char *ptr = str;
    int length = strlen(str);

    int *len = &length;

    printf("Length of string %d", *len);

    return 0;
}