#ifndef MAIN
#define MAIN
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char p);
int print_n(const va_list ls);
int _printf(const char *format, ...);
int print_(const va_list a);
int print_string(const va_list b);
int print_modulo(const va_list list);
int num_digits(int n);
void print_num(int n);
int print_b(const va_list);
void print_bin(unsigned int);
unsigned int bin_digits(unsigned int);

#endif
