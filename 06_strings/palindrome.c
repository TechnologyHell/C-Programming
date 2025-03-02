#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define max 100

void main()
{
    char string[max], reverse[max];
    int len, i, isPalindrome = 1;

    printf("Enter the string to check : ");
    fgets(string, max, stdin);

    len = strlen(string);

    if(string[len-1] == '\n')
    {
        string[len-1] = '\0';
        len --;
    }

    for(i=0; i<len; i++)
    {
        if( tolower(string[i]) != tolower(string[len - 1 - i]) )
        {
            isPalindrome = 0;
        }
    }

    if(isPalindrome)
        printf("Palindrome\n");
    else    
        printf("Not Palindrome\n");
}