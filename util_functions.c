/**
 * _write_char_bis - mimics _write_char
 * @c: the string to print
 *Return: void
 */
void _write_char_bis(const char *c)
{
	int x = 0;

	for (x = 0; x < len(c); x++)
		_write_char(c[x]);
}
/**
 * len - print the length of a string
 * @str: the string to work on
 * Return: length of str
 */
int len(const char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * exec_hex - calls the to_hex function
 * with the appropriate arguments
 * @ap: va_list
 * @
 */
void exec_hex(va_list ap)
{
	long tmp = va_arg(ap, int);

	dec_to_hex(tmp);
}
/**
 * exec_d - prints numbers of x_function
 * @ap: list or args
 *
 */
void exec_d(va_list ap, char s)
{
	if (s == 'd')
	{
		long tmp_l = va_arg(ap, int);

		print_num(tmp_l);
	}
	else if (s == 'c')
	{
		int tmp = va_arg(ap, int);

		_write_char(tmp);
	}
	else
	{
		const char *c = va_arg(ap, const char*);

		_write_char_bis(c);
	}
}
/**
 * x_f - the core of the _printf  function
 * determines what to do with the arguments provided
 * by the printf function which has this form:
 * int _printf(const *format, ...)
 * @l: the length of the format
 * @format: the format
 * @ap: the list of arguments
 * Return: void
 */
void x_f(int l, const char *format, va_list ap)
{
	int x = 0, tmp;
	char next;
	long tmp_l;
	const char *c;

	for (x = 0; x < l + 1; x++)
	{
		if (format[x] == '%')
		{
			next = format[x + 1];
			if (check_format(next) == -1)
			{
				tmp = va_arg(ap, int);

				_write_char(format[x]);
			}
			if (check_format(next) == 0 &&
				(next == 'd' || next == 'i' || next == 'u'))
			{
				exec_d(ap, 'd');
				x += 1;
			}
			if (check_format(next) == 0 && (next == 's'))
			{
				exec_d(ap, 's');
				x += 1;
			}
			if (next == 'c')
			{
				exec_d(ap, 'c');
				x = x + 1;
			}
			if (check_format(next) == 0 && next == 'x')
			{
				exec_hex(ap);
				x = x + 1;
			}
		else
			_write_char(format[x]);
		}
	}
}
