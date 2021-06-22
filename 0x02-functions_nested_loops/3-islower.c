#include "holberton.h"

/**
 * _islower - detects a lowercase character that is used as function input
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _islower(int c)
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
