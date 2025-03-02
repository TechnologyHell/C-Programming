#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define max 10

void main()
{
    char str[max];
    int len ;

    printf("Enter the string : ");
    fgets(str, max, stdin);
    
    len = strlen(str);

    if( str[len-1] == '\n' )
    { 
        str[len-1] = '\0';
        len --;
    }

    printf("Length : %d\n", len);
}