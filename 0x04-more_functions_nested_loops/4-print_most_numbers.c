#include "holberton.h"

/**
 * print_most_numbers - print digits from 0 to 9.
 * putchar - prints a character.
 * Return: 0.
 */

void print_most_numbers(void)
{
int i = 48;
while (i < 58)
{
if ((i >= 50 && i <= 52) && (i % 2 == 0))
{

}
else
{
_putchar(i);
}
i++;
}
_putchar('\n');
}
