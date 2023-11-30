#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#define N 100

void clean()
{
	while (getchar() != '\n');
}


int main()
{
	setlocale(LC_ALL, "rus");
	do
	{
		float s = 0, t[N], ts = 0;
		int i, n;
		do
		{
			printf("Введите кол-во членов: ");
			scanf("%d", &n);
			clean();
		} while (n<1 || n>100);
		for (i = 0; i < n; i++)
		{
			printf("Введите %d член: ", i+1);
			scanf("%f", &t[i]);
			clean();
		}
		for (i = 0; i < n; i++)
		{
			ts = ts + t[i] / n;
		}
		ts = ts * 10000;
		ts = int(ts);
		ts = ts / 10000;
		printf("Среднее значение: %g", ts);
		for (i = 0; i < n; i++)
		{
			s = pow((ts - t[i]), 2.0) + s;
		}
		s = s / n / (n - 1);
		s = sqrt(s);
		printf("\nДоверительный интервал: %g", s);
		printf("\n\nНажмите Enter для повторного запуска программы\nНажмите Esc для выхода из программы\n\n");
	}while (_getch()!=27);
}