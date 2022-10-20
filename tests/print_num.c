#include "main.h"
/**
 * print_num - print every numbers
 * that is passed onto it
 * @n: the number to be printed
 * Return: number of args printed
 */
int print_num(int n)
{
	int count, x;

	x = 1;
	count = 0;

	if (n < 0)
	{
		count += _write_char('-');
		n = n * -1;
	}
	for (; n / x > 9; )
		x *= 10;

	for (; x != 0; )
	{
		count += _write_char('0' + n / x);
		n %= x;
		x /= 10;
	}

	return (count);
}
