#include "main.h"
#include <stdarg.h>
/**
 * _printf - this function prints a formated string
 * @format: a string consisting of multiple  identifiers
 * ...: arguments
 * Return: no of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, t, counter;
	char *str;
	va_list args;

	va_start(args, 50);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			counter++;
		}
		else
		{
			t = ++i;
			if (format[t] == 'c')
			{
				str = va_arg(args, char*);
				_putchar(*str);
				counter++;
			}
			if (format[t] == 's')
			{
				str = va_arg(args, char*);
				while (*str++)
				{
					_putchar(*str);
					counter++;
				}
			}
			if (format[t] == '%')
			{
				_putchar('%');
				counter++;
			}
		}
		i++;
	}
	va_end(args);
	return (counter);
}
