#include "holberton.h"

/**
 * print_triangle - print triangle of size n.
 * putchar - prints a character.
 * Return: 0.
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
	int b = 1;
	int a;

	while (size > 0)
	{
		a = size - 1;
		while (a > 0)
		{
			_putchar(32);
			a--;
		}
		a = b;
		while (a > 0)
		{
			_putchar(35);
			a--;
		}
		_putchar('\n');
		size--;
		b++;
	}
	if (size >= 0 && b == 1)
	{
		_putchar('\n');
	}
	else
	{
	}
}
