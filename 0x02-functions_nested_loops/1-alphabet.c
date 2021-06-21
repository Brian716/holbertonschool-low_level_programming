#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 * _putchar - calling function _putchar
 * Return: 0
 */

void print_alphabet(void)
{
int c = 97;
while (c <= 122)
{
_putchar(c);
c++;
}
_putchar('\n');
}
