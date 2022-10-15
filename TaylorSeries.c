#include <stdio.h>
#include <math.h>
#define PI 3.142

void main()
{
    int degree, i;
    float nume, deno, sum=0, term, x;

    printf("Enter the number of degrees\n");
    scanf("%d",&degree);

    x = degree * (PI/180);

    nume = x;
    deno = 1;
    i = 2;

    do
    {
        term = nume/deno;
        sum = sum + term;
        nume = - nume * x * x;
        deno = deno * i * (i+1);
        i = i + 2;
    } while(fabs(term>=0.000001));

    printf("The sine of %d = %.3f\n",degree,sum);
    printf("The sine using the built in function is %d = %.3f",degree,sin(x));

}
