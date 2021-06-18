#include <stdio.h>

/**
 * main - function prints exact phrases
 * Return: 0
 */

int main(void)
{
int A = 97;
int B = 65;
while (A <= 122)
{
putchar(A);
A++;
}
while (B <= 90)
{
putchar(B);
B++;
}
putchar('\n');
return (0);
}
