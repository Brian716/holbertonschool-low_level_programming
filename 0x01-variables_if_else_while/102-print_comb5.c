#include <stdio.h>

/**
 * main - function prints exact phrases
 * Return: 0
 */

int main(void)
{
int A = 48;
int B = 48;
int C = 48;
int D = 49;
while (A <= 57)
{
while (B <= 57)
{
while (C <= 57)
{
while (D <= 57)
{
putchar(A);
putchar(B);
putchar(32);
putchar(C);
putchar(D);
if (A != 57 || B != 56)
{
putchar(44);
putchar(32);
}
D++;
}
C++;
D = 48;
}
B++;
if (B == 57)
{
C = A + 1;
D = 48;
}
else
{
C = 48;
D = B + 1;
}
}
A++;
B = 48;
C = A;
D = A;
}
putchar('\n');
return (0);
}
