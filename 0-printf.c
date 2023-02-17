#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints output in formatted manner
 * @format: character array to be printed
 *
 * Return: count.
 */

int _printf(const char *format, ...)
{
	int k, count;
	char *n;

	va_list extras;
	
	count = 0;
	va_start(extras, format);
	if (*format == '\0')
		return (0);
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
			format++;
			count += 1;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				k = va_arg(extras, int);
				_putchar(k);
				count += 1;
			}
			if (*format == 's')
			{
				n = va_arg(extras, char *);
				_str(n);
				count += 1
			}
			if (*format == '%')
			{
				_putchar(*format);
				count += 1;
			}
			format++;
	}
	va_end(extras);
	return (count);
}
