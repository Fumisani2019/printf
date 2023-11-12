#include <stdarg.h>
#include "main.h"
/**
 * _printf - Reveives the main string and all the necessary parameters to
 * print a formated string
 * @format A string containing the needed characters
 * Returns: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	unsigned int c;
	va_list args;

	va_start(args, format);
	i = 0;
	c = 0;

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			ft_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			ft_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			ft_putstr(va_arg(args, char*));
			i++;
		}
		else if (format[i + 1] == '%')
		{
			ft_putchar('%');
		}
		else if (format[i + 1] == 'd')
		{
			ft_putnbr(va_arg(args, int));
			i++;
		}
		c++;
		i++;
		va_end(args);
	}
	return (c);
}
