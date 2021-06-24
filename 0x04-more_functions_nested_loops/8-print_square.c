#include "holberton.h"

/**
 * print_square - prints a square.
 * putchar - prints a character.
 * Return: 0.
 * @size: square size.
 */

void print_square(int size)
{
	if (size > 0)
	{
		int a = 0;
		int b = 0;

		while (b < size)
		{
			while (a < size)
			{
				_putchar(35);
				a++;
			}
			_putchar('\n');
			a = 0;
			b++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
