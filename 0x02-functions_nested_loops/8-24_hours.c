#include "holberton.h"

/**
 * jack_bauer - detects a lowercase or uppercase character that is used.
 * _putchar - writes the character c to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void jack_bauer(void)
{
int A = 48;
int B = 48;
int C = 48;
int D = 48;
while (A <= 50)
{
while (B <= 57)
{
if (B != 52 || A != 50)
{
while (C <= 53)
{
while (D <= 57)
{
_putchar(A);
_putchar(B);
_putchar(58);
_putchar(C);
_putchar(D);
_putchar('\n');
D++;
}
C++;
D = 48;
}
B++;
C = 48;
}
else
{
B = B + 6;
}
}
A++;
B = 48;
}
}
