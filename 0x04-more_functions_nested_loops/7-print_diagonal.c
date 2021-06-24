#include "holberton.h"

/**
 * print_diagonal - print a diagonal line of a given lenght.
 * putchar - prints a character.
 * @n: lenght of the diagonal line.
 * Return: 0.
 */

void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	while (n > 0)
	{
		a = b;
		while (a > 0)
		{
			_putchar(32);
			a--;
		}
		_putchar(92);
		_putchar('\n');
		n--;
		b++;
	}
	if (n <= 0 && b == 0)
	{
		_putchar('\n');
	}
	else
	{
	}
}
