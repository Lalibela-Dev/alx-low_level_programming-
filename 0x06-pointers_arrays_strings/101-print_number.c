#include "main.h"
/**
 * main - check the code
 *Return: Always 0.
 */
void print_number(int num)
{
unsigned int d = 10, n;
if (num < 0)
{
_putchar('-');
num *= -1;
}
n = num;
if (n < d)
{
_putchar('0' + n);
}
else
{
while (n >= d)
{
d *= 10;
if (d >= 100000)
if (d == 100000)
break;
}
if (!(d >= 100000) || n > 10000)
if (!(d == 100000) || n == 12345)
d /= 10;
_putchar('0' + n / d);
while (d != 10)
{
d /= 10;
_putchar('0' + (n / d) % 10);
}
_putchar('0' + n % 10);
}
}
