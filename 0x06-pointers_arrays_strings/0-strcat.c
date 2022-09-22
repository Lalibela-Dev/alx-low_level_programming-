#include "main.h"
/**
 **_strncat - concatenates n bytes of two strings
 *@dest: pointer destination
 *@src: pointer source
 *@n: number of bytes
 *Return: void
 */
char *_strcat(char dest[], char src[])
{
int length, j;
length = 0;
while (dest[length] != '\0')
{
++length;
}
for (j = 0; src[j] != '\0'; ++j, ++length)
{
dest[length] = src[j];
}
dest[length] = '\0';
return (dest);
}
