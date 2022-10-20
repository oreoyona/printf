#include "main.h"
/**
 * _memcpy - copies memory
 * @dest: Destinationg
 * @src: Source
 * @n: The number of bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * reverse - reverses a string
 * @s: string to reverse
 * Return: a pointer
 */
char *reverse(char *s)
{
	int len, x;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);

	for (x = 0; x < len; x++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[x];
		dest[x] = tmp;
	}
	return (dest);
}
/**
 * print_rev - print the reverse of a string
 * @s: the string to be printed
 * Return: the length of s
 */
int print_rev(char *c)
{
	char *str = reverse(c);
	

}
