/**
 */

void printf(const char *format, ...)
{
        int x, tmp = 0;
        int len = 0;
        char next;
        va_list ap;

        va_start(ap, format);

        while (format[len])
                len++;

        for (x = 0; x < len; x++)
        { 
                if (format[x] == '%')
                {
                        next = format[x + 1];
                        if (check_format(next)== -1)
                        {
                                tmp = va_arg(ap, int);
                                putchar(format[x]);
                        }
                        
                        if (check_format(next) == 0 && next == 'd')
                        {
                                tmp = va_arg(ap, int);
                                print_num(1, tmp);
                                x += 2;
                        }

                        if (next == 'c')
                        {
                                tmp = va_arg(ap, int);
                                putchar(tmp);
                                x += 2;
                        }
                }
                else
                        putchar(format[x]);
        }

        va_end(ap);
}
