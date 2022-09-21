#include "main.h"

/**
 * strcat - concatenates the string poited
 * @dest - the string pointer to be concatenate upon
 * @src - the string source to appended to @dest
 * Return: pointer to a destination string
 */
char *strcat(char *dest cont char *src)
{
	int index = 0, dest_len = 0;
	while(dest[index++])
		dest_len++;
	for  (index = 0; src[index]; index++)
		dest[dest_leen++] = src[index];
	return (dest);
}
