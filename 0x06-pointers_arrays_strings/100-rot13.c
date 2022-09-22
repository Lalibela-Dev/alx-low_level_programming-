#include "main.h"
/**
 **rot13 - encodes a string using rot13
 *@c: string to convert
 *Return: encoded string
 */
char *rot13(char *c)
{
int i, j;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char r[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (c[i] == a[j])
{
c[i] = r[j];
break;
}
}
}
return (c);
}
