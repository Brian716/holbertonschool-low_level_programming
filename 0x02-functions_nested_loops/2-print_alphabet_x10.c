#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times straight.
 * print_alphabet - prints the alphabet in lowercase
 * _putchar - calling function _putchar
 * Return: 0
 */

void print_alphabet_x10(void)
{
int b = 0;
while (b < 10)
{
int c = 97;
while (c <= 122)
{
_putchar(c);
c++;
}
_putchar('\n');
b++;
}
}
