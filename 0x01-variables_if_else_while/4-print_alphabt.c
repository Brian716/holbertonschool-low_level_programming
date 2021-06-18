#include <stdio.h>

/**
 * main - function prints exact phrases
 * Return: 0
 */

int main(void)
{
int A = 97;
while (A <= 122)
{
if (A != 113 && A != 101)
{
putchar(A);
A++;
}
else
{
A++;
}
}
putchar('\n');
return (0);
}
