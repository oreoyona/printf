#ifndef __MAIN_H__
#define __MAIN_H__
#include <stdarg.h>
#include <stdlib.h>
char *reverse(char *s);
int dec_to_hex(long n);
int dec_to_oct(unsigned int n);
void print_s(char *str);
int print_num(int n);
int check_format(char c);
int _printf(const char *format, ...);
int len (const char *str);
int _write_char(char c);
void x_f(int l, const char *format, va_list ap);
int _printf(const char *format, ...);
#endif /* __MAIN_H__ */

