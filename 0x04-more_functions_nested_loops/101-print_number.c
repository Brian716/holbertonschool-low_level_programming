#include "holberton.h"

/**
 * print_number - print numbers of any size.
 * putchar - prints a character.
 * Return: 0.
 * @n: The Number to print.
 */

void print_number(int n)
{
	int a = 10;
	int i = 1;
	int c = 0;
	int b;

	while (a >= 10)
	{
		a = n / i;
		i = i * 10;
		c++;

		if (a < 0)
		{
			a = a * -1;
		}
	}
	while (c > 0)
	{
		c--;
		i = i / 10;
		a = n / i;
		b = a * i;

		if (n >= 0)
		{
			_putchar('0' + a);
			n = n - b;
		}
		else
		{
			a = a * -1;
			b = b * -1;
			_putchar(45);
			_putchar('0' + a);
			n = n + b;
			n = n * -1;
		}
	}
}
