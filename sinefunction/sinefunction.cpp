#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // for sin()

int main()
{
    double x;
    printf("Enter x (0 < x < 1): ");
    scanf("%lf", &x);
    printf("sin(%.4f) = %.4f\n", x, sin(x));
    return 0;
}
