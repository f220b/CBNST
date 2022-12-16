#include <stdio.h>
#include <math.h>

int D(int a, int b, int c)
{
    return (b * b) - (4 * a * c);
}
void main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int d = D(a, b, c);
    if (d > 0)
    {
        float root1 = (-b + sqrt(d)) / (2 * a);
        float root2 = (-b - sqrt(d)) / (2 * a);
        printf("Root 1: %.2lf\nRoot 2 = %.2lf", root1, root2);
    }
    else if (d == 0)
    {
        float root = -b / (2 * a);
        printf("Root 1 = Root 2 = %.2lf;", root);
    }
    else
    {
        float real = -b / (2 * a);
        float img = sqrt(-d) / (2 * a);
        printf("Root 1: %.2lf+%.2lfi\nRoot 2: %.2f-%.2fi", real, img, real, img);
    }
}
