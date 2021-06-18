#include <stdio.h>

/**
 * main - function prints exact phrases
 * Return: 0
 */

int main(void)
{
int A = 48;
int B = 49;
while (A <= 56)
{
while (B <= 57)
{
putchar(A);
putchar(B);
putchar(44);
putchar(32);
B++;
}
A++;
B = A + 1;
}
putchar('\n');
return (0);
}
