#include "holberton.h"

/**
 * times_table - detects a lowercase or uppercase character that is used.
 * _putchar - writes the character c to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void times_table(void)
{
int A = 48;
int B = 49;
int C = 48;
while (B <= 57)
{
while (A <= 57)
{
if (C <= 9)
{
if (A <= 56)
{
_putchar(C);
_putchar(44);
_putchar(32);
_putchar(32);
}
else
{
_putchar(C);
}
A++;
C = C + B - 48;
}
else
{
if (A <= 56)
{
_putchar(48);
_putchar(48);
_putchar(44);
_putchar(32);
_putchar(32);
}
else
{
_putchar(48);
_putchar(48);
}
}
_putchar('\n');
B++;
A = 48;
C = 48;
}
}
