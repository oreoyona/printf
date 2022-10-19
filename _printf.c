#include "main.h"
/**
 * _printf - formats an prints an input
 *@format: tbe input
 *...: list of variables
 * Return: length of the format
 */
int _printf(const char *format, ...)
{
	va_list ap;
	if (format == NULL)
		return (-1);
	va_start(ap, format);
	x_f(len(format), format, ap);
	va_end(ap);

	return (len(format));
}
