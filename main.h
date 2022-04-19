#ifndef MAIN
#define MAIN
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char p);
int _printf(const char *format, ...);
int print_char(const va_list a);
int print_string(const va_list b);
int print_modulo(const va_list list);

#endif
