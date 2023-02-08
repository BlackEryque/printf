#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints to output
 * @s: character to be printed
 *
 * Return: Always 0.
 */

int _putchar(char s)
{
	const char *k;

	k = &s;
	write(1, k, sizeof(s));
	return (0);
}
