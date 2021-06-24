#include "holberton.h"

/**
 * _isupper - detects uppercase character.
 * putchar - prints a character.
 * Return: 0.
 * @c: The character to compare.
 */

int _isupper(int c)
{
	if (c < 65 || c > 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
