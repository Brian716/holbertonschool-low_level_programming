#include "holberton.h"

/**
 * print_line - print a straight line of a given lenght.
 * putchar - prints a character.
 * @n: lenght of the line.
 * Return: 0.
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar('\n');
}
