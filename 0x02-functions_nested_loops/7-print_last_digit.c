#include "holberton.h"

/**
 * print_last_digit - detects a lowercase or uppercase character that is used.
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int c)
{
int result;
if (c >= 0)
{
result = c % 10;
_putchar (result + '0');
return (result);
}
else
{
result = c % 10;
result = result * -1;
return (result);
}
}
