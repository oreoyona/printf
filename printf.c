/**
 */

int _printf(const char *format, ...)
{
        va_list ap;

        va_start(ap, format);
	x_f(len(format), format, ap);
        va_end(ap);
	return (len(format));
}
