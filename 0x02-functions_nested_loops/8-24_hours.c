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
while (A <= 2)
{
while (B <= 9)
{
while (C <= 5)
{
while (D <= 9)
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
A++;
B = 48;
}
}
