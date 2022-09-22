#include<stdio.h>
#include<locale.h>
#include<math.h>
#define M_PI 3.14159265358979323846
#define p 3
double sinrad(double grad)
{
	double result = sin(grad * M_PI / 180);
	return result;
}

double scha(double x)
{
	double a = sqrt(p * x);
	return a;
}

double schb(double x)
{
	double b = p * pow(x, 2)+sqrt(scha(x));
	return b;
}

double schy(double x)
{
	double y = pow(log(pow(schb(x), 2)), 3) + scha(x) * x;
	return y;
}


void main(void)
{
	setlocale(LC_ALL, "RUS");
	double grad, result;
	puts("Программа вычисления синуса");
	puts("Введите градус");
	scanf("%lf", &grad);
	result = sinrad(grad);
	printf("sinus %lf gradusov raven %lf", grad, result);

	double x, res1, res2, res3;
	puts("\nвведите х");
	scanf("%lf", &x);
	res1 = scha(x);
	res2 = schb(x);
	res3 = schy(x);
	printf("a=%lf, b=%lf, y=%.1lf", res1,res2,res3);

}