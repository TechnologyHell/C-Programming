#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define max 100

void main()
{
    char string[max], rev[max];
    int i, len, a;

    printf("Enter the string : ");
    fgets(string, max, stdin);

    len = strlen(string);
    if(string[len-1] == '\n')
    {
        string[len-1] = '\0';
        len--;
    }

    for(i=0; i<len; i++)
    {
        rev[i] = string[len - 1 - i];
    }

    rev[len] = '\0';

    printf("Original String : %s\n", string);
    printf("Reversed String : %s\n", rev);

}