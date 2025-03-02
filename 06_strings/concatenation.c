#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define max 100

void main()
{
    char st1[max], st2[max];
    int len1, len2, i, match = 0;

    printf("Enter the 1st string : ");
    fgets(st1, max, stdin);

    printf("Enter the 2nd string : ");
    fgets(st2, max, stdin);

    len1 = strlen(st1);
    len2 = strlen(st2);

    if( st1[len1 - 1] == '\n')
    {
        st1[len1 - 1] = '\0';
        len1--;
    }

    if( st2[len2 - 1] == '\n')
    {
        st2[len2 - 1] = '\0';
        len2--;
    }

    printf("After Concatenation : %s\n", strcat(st1, st2));
}