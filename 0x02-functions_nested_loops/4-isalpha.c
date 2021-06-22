#include "holberton.h"

/**
 * _isalpha - detects a lowercase or uppercase character that is used.
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isalpha(int c)
{
if (c < 65 || c > 90)
{
if (c < 97 || c > 122)
{
return (0);
}
else
{
return (1);
}
}
else
{
return (1);
}
}
