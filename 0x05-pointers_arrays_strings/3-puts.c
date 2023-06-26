#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	char *str;

	while (*str != '\0')
	{
		_puts(*str++);
	}
	_puts('\n');
}
