#include "main.h"
/**
 * _stropy - copy a string
 * @src: Source value
 * Return: the pointer to dest
 */
char *_stropy(char *dest; char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
