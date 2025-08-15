#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    printf("%-6s %-12s %-12s \n", "x", "sin(x)", "cos(x)");
    for (x = 0; x <= 1.0001; x += 0.1)
        printf("%-6.1f %-12.6f %-12.6f\n", x, sin(x), cos(x));
    return 0;
}
