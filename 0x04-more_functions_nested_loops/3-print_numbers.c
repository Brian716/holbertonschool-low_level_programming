#include "holberton.h"

/**
 * print_numbers - print digits from 0 to 9.
 * putchar - prints a character.
 * Return: 0.
 */

void print_numbers(void)
{
int i = 48;
while (i < 58)
{
_putchar(i);
i++;
}
_putchar('\n');
}
