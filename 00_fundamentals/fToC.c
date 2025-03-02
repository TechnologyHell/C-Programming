#include<stdio.h>

void main()
{
    float f, c;
    printf("Enter the temp in Farenheit : ");
    scanf("%f", &f);

    c = ((f-32)*5)/9;

    printf("%0.2f degree F = %0.2f degree C\n", f, c);
}