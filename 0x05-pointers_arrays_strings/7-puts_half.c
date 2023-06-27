#include "main.h"
/**
 * _Strlen - return the length of a string
 * @s: string
 * Return: length
 */
int _Strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
