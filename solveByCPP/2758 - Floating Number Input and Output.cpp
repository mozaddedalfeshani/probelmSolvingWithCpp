#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;
    double c, d;
    scanf("%f %f %lf %lf", &a, &b, &c, &d);
    printf("A = %.6lf, B = %.6lf\nC = %.6lf, D = %.6lf\n", a, b, c, d);
    printf("A = %.1lf, B = %.1lf\nC = %.1lf, D = %.1lf\n", a, b, c, d);
    printf("A = %.2lf, B = %.2lf\nC = %.2lf, D = %.2lf\n", a, b, c, d);
    printf("A = %.3lf, B = %.3lf\nC = %.3lf, D = %.3lf\n", a, b, c, d);
    printf("A = %.3E, B = %.3E\nC = %.3E, D = %.3E\n", a, b, c, d);
    printf("A = %.0f, B = %.0f\nC = %.0f, D = %.0f\n", a, b, c, d);
    return 0;
}