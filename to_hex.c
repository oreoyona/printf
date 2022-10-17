#include "main.h"

/**
 * dec_to_hex - concerts a deximal to hexadeximal
 * @n: the decimal to be converted
 * Return: the length of the hexadeximal string
 */
int dec_to_hex(unsigned int n)
{
	unsigned int quotient, remainder;
	int i, j = 0;
	char hexadecimalnum[100];
	quotient = n;
 
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hexadecimalnum[j++] = 48 + remainder;
		else
			hexadecimalnum[j++] = 55 + remainder;
		quotient = quotient / 16;
	}
	for (i = j; i >= 0; i--)
		return (_write_char(hexadecimalnum[i]));
}
