#include "holberton.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times.
 * putchar - prints a character.
 * Return: 0.
 */

void more_numbers(void)
{
int c = 0;
int a, b;
while (c <= 9)
{
c++;
a = 48;
b = 47;
while (b <= 52)
{
_putchar(a);
if (b > 47)
{
_putchar(b);
}
else
{

}
if (b == 47 && a < 57)
{
a++;
}
else
{
a = 49;
b++;
}
}
_putchar('\n');
}
}
