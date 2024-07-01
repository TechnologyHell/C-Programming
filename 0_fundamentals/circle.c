#include<stdio.h>
#include<math.h>

void main()
{
    float r, c, a;

    printf("Enter the radius of the cirle : " );
    scanf("%f", &r);

    c = 2 * 3.14 * r;
    a = 3.14 * pow(r,2);

    printf("Radius : %0.1f \nCircumference : %0.1f \nArea : %0.1f", r, c, a);
}