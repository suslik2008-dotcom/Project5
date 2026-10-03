#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES_
#define t -6
#include <math.h>
#include <stdio.h>
#include <locale.h>
void e2()
{
	setlocale(LC_CTYPE, "RUS");
	int a, b, c;
	printf("¬ведите числа a, b и c\n");
	scanf("%d %d %d", &a, &b, &c);
	int d = a % 3 + b % 3 + c % 3;
	printf("%d", d>0);
}
void main()
{
	double x;
	scanf("%le", &x);
	double a = log(x);
	double b = pow(pow(x, 2) + pow(t, 2), 0.5);
	double y = pow(fabs(a - b*x), 0.2);
	printf("%le", y);
}