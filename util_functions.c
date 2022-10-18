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
	int x = 0;
	char next;
	int tmp;
	long int tmp_l;
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
			    (next == 'd'|| next == 'i' || next == 'u'))
			{
				tmp_l = va_arg(ap, int);
				print_num(tmp_l);
				x += 1;
			}

			if (next == 'c')
			{
				tmp = va_arg(ap, int);
				_write_char(tmp);
				x += 2;
			}
		}
		else
			_write_char(format[x]);
	}
}
