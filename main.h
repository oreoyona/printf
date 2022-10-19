#ifndef __PRINT_F___
#define __PRINT_F___
#include <stdarg.h>
#include <stdlib.h>

int dec_to_hex(long n);
int dec_to_oct(unsigned int n);
void print_s(char *str);
void print_num(long int n);
int check_format(char c);
int len (const char *str);
int _write_char(char c);
void x_f(int l, const char *format, va_list ap);
int _printf(const char *format, ...);
#endif /* __PRINT_F___ */

