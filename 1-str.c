#include "main.h"
/**
 * _str - prints a string"
 * @s: strig to be printed
 *
 * Return: Always 0.
 */

int _str(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	return (0);
}
