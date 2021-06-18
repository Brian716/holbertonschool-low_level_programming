#include <stdio.h>

/**
 * main - function prints exact phrases
 * Return: 0
 */

int main(void)
{
int A = 48;
while (A <= 57)
{
putchar(A);
putchar(44);
putchar(32);
A++;
}
putchar('\n');
return (0);
}
