#include "main.h"
/**
 * check_format - checks wether the given format is valid
 * @c: the char to be tested
 * Return: 0 if type is authorized
 * -1 otherwise
 */
int check_format(char c)
{
	int x = 0;
	int res = -1;
	char types[] = {'d', 's', 'x', 'u', 'X', 'i', 'o', 'c', 'f', 'p'};

	for (x = 0; x < 11; x++)
	{
		if (c == types[x])
			res = 0;
	}
	return (res);
}
