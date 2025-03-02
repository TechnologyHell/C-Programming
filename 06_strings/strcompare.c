#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define max 100

void main()
{
    char st1[max], st2[max];
    int  i, cmp=1;

    printf("Enter the 1st string : ");
    fgets(st1, max, stdin);

    printf("Enter the 2nd string : ");
    fgets(st2, max, stdin);

    //using strcmp
    cmp = strcmp(st1, st2);

    if(cmp)
        printf("Not Matched\n");
    else
        printf("Matched\n");

}