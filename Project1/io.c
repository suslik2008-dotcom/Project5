#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES_
#include <math.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    double x, y, z;  // Пример команды
    scanf("%lf %lf %lf", &x, &y, &z);
    double a = fabs(cos(x) - cos(y));
    double b = pow(a, 1 + pow(sin(y), 2)*2);
    double c = 1 + z + pow(z, 2) / 2 + pow(z, 3) / 3 + pow(z, 4) / 4;
    printf("%le", b*c);
}