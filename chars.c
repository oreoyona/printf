#include "main.h"

/**
 * print_str - writes the string to stdout
 * @ipt: input string
 * @buf: pointer
 * @x: index of str
 * Return: an int
 */
int print_str(va_list ipt, char *buf, unsigned int x)
{
	char *str;
	unsigned int i;
	char nill[] = "(null)";

	str = va_arg(ipt, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			x = x_concate(buf, nill[i], x);
		return (6);
	}
	for (i = 0; str[i]; i++)
		x = x_concate(buf, str[i], x);
	return (i);
}
/**
 * fill_binary_array - prints decimal in binary
 * @binary: pointer to binary
 * @int_in: input number
 * @isneg: if input number is negative
 * @limit: size of the binary
 * Return: number of chars printed.
 */
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit)
{
	int i;

	for (i = 0; i < limit; i++)
		binary[i] = '0';
	binary[limit] = '\0';
	for (i = limit - 1; int_in > 1; i--)
	{
		if (int_in == 2)
			binary[i] = '0';
		else
			binary[i] = (int_in % 2) + '0';
		int_in /= 2;
	}
	if (int_in != 0)
		binary[i] = '1';
	if (isneg)
	{
		for (i = 0; binary[i]; i++)
			if (binary[i] == '0')
				binary[i] = '1';
			else
				binary[i] = '0';
	}
	return (binary);
}
/**
 * x_concate - concatenates the buffer characters
 * @str: the string
 * @c: charcter to concatenate
 * @x: index of str
 * Return: a positive int
 */
unsigned int x_concate(char *str, char c, unsigned int x)
{
	if (x == 1024)
	{
		print_buf(str, x);
		x = 0;
	}
	str[x] = c;
	x++;
	return (x);
}
/**
 * print_chr - writes the character c to stdout
 * @arguments: input char
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */
int print_chr(va_list arguments, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(arguments, int);
	x_concate(buf, c, ibuf);

	return (1);
}
/**
 * print_rev - writes the str in reverse
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_rev(va_list arguments, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int i;
	int j = 0;
	char nill[] = "(llun)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = x_concate(buf, nill[i], ibuf);
		return (6);
	}
	for (i = 0; str[i]; i++)
		;
	j = i - 1;
	for (; j >= 0; j--)
	{
		ibuf = x_concate(buf, str[j], ibuf);
	}
	return (i);
}

