#include "main.h"
#include <stdarg.h>
#include <string.h>
/**
 * dec_to_oct - concerts a deximal to octal
 * @n: the decimal to be converted
 * Return: the length of the octal string
 */
int dec_to_oct(unsigned int n)
{
	long quotient, octalnum = 0;
	char number[100];
	int i = 1, j, l;

	quotient = n;
	
	while (quotient != 0)
	{
		number[i] = quotient % 8;
		quotient = quotient / 8;
		i++;
	}
	for (j = i - 1; j > 0; j--)
		octalnum *= 10 + number[j];
	l = strlen(octalnum);

	return (l);
}
