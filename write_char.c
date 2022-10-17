#include <unistd.h>
/**
 * _write_char - write ASCII chars to standard output
 * @c: the char to be printed
 * Return: the length of the char
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}
