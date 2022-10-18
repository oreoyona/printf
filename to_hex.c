/**
 * print_hex - print hex char to standard output
 * @str: String to parse
 */
void print_hex(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);
}

/**
 * length - returns  the length of an hex number
 * @num: The number we work on
 * @base: Base and here kt is 16
 * Return: the length of a number
 */
unsigned int length(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}

/**
 * dec_to_hex - concerts a deximal to hexadeximal
 * @n: the decimal to be converted
 * Return: the length of the hexadeximal string
 */
int dec_to_hex(long n)
{
	int len, x;
	char *mem1, *mem2;

	if (n == 0)
		return (_write_char('0'));
	if (n < 1)
		return (-1);
	len = length(n, 16);
	mem1 = malloc(sizeof(char) * len + 1);
	if (mem1 == NULL)
		return (-1);
	for (len = 0; n > 0; len++)
	{
		x = n % 16;
		if (x > 9)
			mem1[len] = x;
		else
			mem1[len] = x + 48;
		n = n / 16;
	}
	mem1[len] = '\0';
	mem2 = reverse(mem1);
	if (mem2 == NULL)
		return (-1);
	print_hex(mem2);
	free(mem1);
	free(mem2);
	return (len);
}
