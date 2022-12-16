#include <stdio.h>
#include <math.h>

double f(double a, double b, double c, double d, double x)
{
    return (a * pow(x, 3)) + (b * pow(x, 2)) + (c * x) + d;
}
void main()
{
    double a, b, c, d, x1 = 0, x2 = 1, mid = 0;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &x1, &x2);
    int count = 0;

    while (count < 3)
    {
        double f1 = f(a, b, c, d, x1);
        double f2 = f(a, b, c, d, x2);
        if (f1 * f2 < 0)
        {
            mid = (x1 + x2) / 2;
            double f3 = f(a, b, c, d, mid);
            if (f1 * f3 < 0)
                x2 = mid;
            else if (f2 * f3 < 0)
                x1 = mid;
            count++;
        }
        else
            x1 = x2++;
    }
    prdoublef("Answer: %d", mid);
}
