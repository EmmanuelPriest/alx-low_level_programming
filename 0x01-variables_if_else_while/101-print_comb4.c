#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * description: print all possible different combinations of three digits
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
int a;
int x = 0;

while (x < 10)
{
a = 0;
while (a < 10)
{
n = 0;
while (n < 10)
{
if (n != a && a != x && x < a && a < n)
{
putchar('0' + x);
putchar('0' + a);
putchar('0' + n);
if (n + a + x != 9 + 8 + 7)
{
putchar(',');
putchar(' ');
}
}
n++;
}
a++;
}
x++;
}
putchar('\n');
return (0);
}
