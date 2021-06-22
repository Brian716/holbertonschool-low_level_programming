#include "holberton.h"

/**
 * c: character to be evaluated.
 * _islower: looks for lowercase characters.
 * Return: 0
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
