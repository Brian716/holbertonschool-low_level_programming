#include "holberton.h"

/**
 * _isdigit - detects a digit.
 * putchar - prints a character.
 * Return: 0.
 * @c: The character to compare.
 */

int _isdigit(int c)
{
	if (c < 48 || c > 57)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
