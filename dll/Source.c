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

double schw(double X, double y, double z)
{
	double w = pow(fabs(cos(X) - cos(y)), 1 + 2 * pow(sin(y), 2)) * (1 + z + (pow(z, 2) / 2) + (pow(z, 3) / 3) + (pow(z, 4) / 4));
	return w;
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

	double X = 0.4*pow(10,4), y = -0.875, z=-0.475*pow(10,-3), PP;
	PP = schw(X, y, z);
	printf("\nDZ=%.4lf", PP);
	/*int A, B, C;
	puts("\nвведите х");
	scanf("%lf", &x);
	res1 = scha(x);
	res2 = schb(x);
	res3 = schy(x);
	/*printf("a=%lf, b=%lf, y=%.1lf", res1, res2, res3);
	A = (int)res1;
	B = (int)res2;
	C = (int)res3;
	printf("\n целая часть от а=%d, целая часть от b=%d, целая часть от y=%d", A, B, C);
	if (  ( (A % 2 == 0) && (B % 2 != 0)  ) ||  ( (A % 2 != 0) && (B % 2 == 0) ) )
	{
		puts("\n только одно из чисел А и В четное: ISTINA");
	}
	else
	{
		puts("\n только одно из чисел А и В четное: LOJ");
	}
	if ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0))
	{
		puts("\n каждое из чисел А,В,С кратно трем: ISTINA");
	}
	else 
	{
		puts("\n каждое из чисел А,В,С кратно трем: LOJ");
	}*/

}