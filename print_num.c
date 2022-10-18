/**
 * print_num - print every numbers
 * that is passed onto it
 * @n: the number of args
 * ...: the list of args
 * Return: void
 */
void print_num(int n, ...)
{
        va_list list;
        int i = 0;
        int tmp;

        va_start(list, n);

        while (i < n)
        {
                tmp = va_arg(list, int);
                if (tmp <= 9)
                        putchar(tmp + '0');
                else
                {
                        putchar(tmp / 10 + '0');
                        putchar(tmp % 10 + '0');
                }

                i++;
        }

        va_end(list);
}
