#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
	
{
	for (i = 0; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
