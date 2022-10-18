/**
 * print_num - print every numbers
 * that is passed onto it
 * @n: the number to be printed
 * Return: void
 */
void print_num(long int n)
{
	if (n < 0)
	{
		_write_char('-');
		n = n * -1;
	}
	if (n == 0)
		_write_char('0');
	if (n / 10)
		print_num(n / 10);
	_write_char(n % 10 + '0');
}
