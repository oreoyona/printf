#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include "print_num.c"
#include "check_format.c"
#include "write_char.c"
#include "util_functions.c"
#include <limits.h>
#include <stdio.h>
#include "strings.c"
#include "to_hex.c"

/**
 * _printf - formats an prints an input
 *@format: tbe input
 *...: list of variables
 * Return: length of the format
 */
int _printf(const char *format, ...)
{
        va_list ap;

        va_start(ap, format);
	x_f(len(format), format, ap);
        va_end(ap);
	return (len(format));
}
