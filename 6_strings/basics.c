#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define max 100

void main()
{
    char string[max], word[ ] = "TechnologyHell", s1[max];
    int length;

    printf("Enter a string : ");
    fgets(string, max, stdin);

    //length of str
    length = strlen(string);
    printf("Length of string : %d\n", length-1);

    //case switch
    printf("Lowercase : %s", strlwr(string));
    printf("Uppercase : %s", strupr(string));

    puts(word);

    //copy
    strcpy(string, s1);

}