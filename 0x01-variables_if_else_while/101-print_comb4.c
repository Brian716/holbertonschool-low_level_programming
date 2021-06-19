#include <stdio.h>

/**
 * main - function prints exact phrases
 * Return: 0
 */

int main(void)
{
int A = 48;
int B = 49;
int C = 50;
while (A <= 55)
{
while (B <= 56)
{
while (C <= 57)
{
putchar(A);
putchar(B);
putchar(C);
if (A != 55)
{
putchar(44);
putchar(32);
}
C++;
}
B++;
C = B + 1;
}
A++;
B = A + 1;
C = B + 1;
}
putchar('\n');
return (0);
}
