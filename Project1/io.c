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
+++++++++++++++===========================++++++++++++++++++++++++++++++++++++++++++++++++================

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include "Name.h"


int main(void) {
	setlocale(LC_ALL, "RUS");
	double x, y, r;
	int n, b;
	char a;
	do {
	    printf("Выберите операцию: \n");
	    printf("1 - Проверка на вхождение точки в множество для 4-го варианта\n");
	    printf("2 - Нарисовать треугольник\n");
	    printf("3 - Посчитать площадь\n");
	    printf("4 - Что такое треугольник?\n");
		printf("5 - Выйти\n");

    	scanf("%d", &n);

		switch (n) {
		case (1):
			printf("Введите последлвательно х и у через пробел >> ");
			scanf("%lf %lf", &x, &y);
			if (sheck(x, y)) { printf("Точка входит в множество\n"); }
			else { printf("Точка отсутствует в множестве\n"); }
			break;
		case (2):
			printf("Введите последовательно символ построения и радиус описанной окружности треугольника прямоугольника >> ");
			scanf(" %c", &a);
			scanf("%d", &b);
			paint(a, b);
			break;
		case (3):
			printf("Укажите радиус описанной окружности треугольника >> ");
			scanf("%lf", &r);
			printf("Площадь фигуры: %lf\n", s(r));
			break;
		case (4):
			info();
			break;
		}
	} while (n != 5);

}















int sheck(double x, double y) {
	if (y == -x && y > 0 && x < 0) { return 1; };
	if (x * x + y * y <= 2 && y < 0 && x > 0 && -y >= x) { return 1; };
	return 0;
}

void paint(char e, int n) {
	n *= 1.41;
	printf("%c\n", e);
	for (int a = 1; a <= n - 1; a++) {
		printf("%c", e);
		for (int b = 1; b <= a - 1; b++) printf(" ");
		printf("%c\n", e);
	}
	for (int c = 1; c <= n + 1; c++) printf("%c", e);
}


double s(double r) {
	return r * r;
}
void info() {
	printf("Треугольник - фигура с тремя сторонами\n");
}








int sheck(double x, double y);
void paint(char e, int n);
double s(double r);
void info();
















