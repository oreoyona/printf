#include "main.h"
/**
 * _printf - emulates the builtin printf
 * @format: input string.
 * Return: number of chars
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0, chaine = 0;
	va_list args;
	int (*core)(va_list, char *, unsigned int);
	char *buffer;

	va_start(args, format), buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				print_buf(buffer, chaine), free(buffer), va_end(args);
				return (-1);
			}
			else
			{
				core = get_print_func(format, i + 1);
				if (core == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					x_concate(buffer, format[i], chaine), len++, i--;
				}
				else
				{
					len += core(args, buffer, chaine);
					i += ev_print_func(format, i + 1);
				}
			} i++;
		}
		else
			x_concate(buffer, format[i], chaine), len++;
		for (chaine = len; chaine > 1024; chaine -= 1024)
			;
	}
	print_buf(buffer, chaine), free(buffer), va_end(args);
	return (len);
}
