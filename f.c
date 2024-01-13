#include <locale.h>
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

//функция f1(x)
double function_1(double x)
{
	return x * log(pow(x, 4)) - tan(sqrt(1 + pow(x, 2)));
}

//функция q(x) для функции f2(x)
double q(double x)
{
	if (x < 1) {
		return pow(x, 2);
	}
	else {
		return x + 1;
	}
}

//функция f2(x)
double function_2(double x)
{
	return 0.25 * log(1 + pow(x, 0.2)) + pow(cos(q(x) + 1), 2);
}

//f1 x
double findxf1()
{
	double x;
	printf("Введите значение 'x' для функции: ");
	scanf("%lf", &x);
	printf("Ответ: %.2lf\n", function_1(x));
}
//f1 x на интервале
double findintf1()
{
	double x, xn, xk, h;
	printf("Введите начальное значение x: ");
	scanf("%lf", &xn);
	printf("Введите конечное значение x: ");
	scanf("%lf", &xk);
	printf("Введите шаг h: ");
	scanf("%lf", &h);
	printf("x\t\tV(x)\n");
	for (double x = xn; x <= xk; x += h) {
		printf("%.2lf\t\t%.4lf\n", x, function_1(x));
	}
}

//f2 x
double findxf2()
{
	double x;
	printf("Введите значение 'x' для функции: ");
	scanf("%lf", &x);
	printf("Ответ: %.2lf\n", function_2(x));
}
//f2 x на интервале
double findintf2()
{
	double x, xn, xk, h;
	printf("Введите начальное значение x: ");
	scanf("%lf", &xn);
	printf("Введите конечное значение x: ");
	scanf("%lf", &xk);
	printf("Введите шаг h: ");
	scanf("%lf", &h);
	printf("x\t\tV(x)\n");
	for (double x = xn; x <= xk; x += h) {
		printf("%.2lf\t\t%.4lf\n", x, function_2(x));
	}
}

void main()
{
	double x, xn, xk, h;
	int ch1, ch2;
	setlocale(LC_ALL, "RUS");
	printf("Программа для вычесления значения функции по заданному значению 'x'\n");
	printf("1.Выполнить вычисления для функции f1(x)\n2.Выполнить вычисления для функции f2(x)\n");
	scanf("%d", &ch1);
	printf("1.Вычислить значение функции\n2.Найти значение функции на интервале\n3.Построить график функции\n");
	scanf("%d", &ch2);
	//нахождение значения функции f1(x) при заданном значении аргумента x
	if (ch1 == 1 && ch2 == 1)
	{
		findxf1();
	}
	//вычисление значения функции f1(x) на интервале при заданном значении аргумента x
	if (ch1 == 1 && ch2 == 2)
	{
		findintf1();
	}
	//нахождение значения функции f2(x) при заданном значении аргумента x
	if (ch1 == 2 && ch2 == 1)
	{
		findxf2();
	}
	//вычисление значения функции f2(x) на интервале при заданном значении аргумента x
	if (ch1 == 2 && ch2 == 2)
	{
		findintf2();
	}
	system("pause");
}
