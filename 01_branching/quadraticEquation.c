#include<stdio.h>
#include<math.h>

void main()
{
    float a, b, c, d, p, q, r;

    printf("The equation is ax2 + bx + c = 0\nEnter the values for a, b and c : ");
    scanf("%f %f %f", &a, &b, &c);

    d = pow(b, 2) - 4 * (a*c);

    if(d == 0)
    {
        printf("One real root possible\n");
        r = -b / (2 * a);
        printf("%0.2f\n", r);
    }

    else if (d > 0)
    {
        printf("Two distinct real roots possible\n");

        p = (-b + sqrt(d)) / (2 * a);
        q = (-b - sqrt(d)) / (2 * a);

        printf("%0.2f\t%0.2f", p, q);
    }

    else
        printf("No real roots possible\n");  

}