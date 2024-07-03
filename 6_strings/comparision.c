#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define max 100

void main()
{
    char st1[max], st2[max];
    int len1, len2, i, match = 0, cmp=1;

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

    if(len1 == len2)
    {
        for(i=0; i<len1; i++)
        {
            if (st1[i] == st2[i])
                match = 1;
        }
    }

    if(match)
        printf("Strings Matched!\n");
    else
        printf("No Match Detected\n");

}