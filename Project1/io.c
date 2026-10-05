#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES_
#include <math.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    double x, y, z;  // Ввод значений
    printf("Введите x >> ");
    scanf("%lf", &x);
    printf("Введите y >> ");
    scanf("%lf", &y);
    printf("Введите z >> ");
    scanf("%lf", &z);
    double a = fabs(cos(x) - cos(y));
    double b = pow(a, 1 + pow(sin(y), 2) * 2);
    double c = 1 + z + pow(z, 2) / 2 + pow(z, 3) / 3 + pow(z, 4) / 4;
    printf("w(x, y, z) = %0.4f", (float)(b * c));
}
