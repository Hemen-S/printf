#include "main.h"
#include <stdlib.h>
/**
 * bin_digits -return number of digits
 * @n: number input
 *
 * Return: number of bin digits
 */
unsigned int bin_digits(unsigned int n)
{
	unsigned int count;

	count = 1;

	while (n % 2 != 1)
	{
		count++;
		n = n / 2;
	}

	return (count);
}
/**
 * print_bin - print bin number
 * @n: input num
 */
void print_bin(unsigned int n)
{
	int *d;

	int i;
	printf("num digits = %d\n", bin_digits(n));

	d = (int *)malloc(sizeof(int) *  bin_digits(n));
	if (d == NULL)
	{
		return;
	}


	for (i = 0; i < bin_digits(n); i++)
	{
		d[i] = n % 2;
		printf("d[%u] = %d\n",i, d[i]);
		n = n / 2;
	}

	for (i = bin_digits(n) - 1; i >= 0; i--)
		_putchar(d[i] + '0');
	free(d);

}
/**
 * print_b - print and retrun number of digits of bin numbers
 * @ls: arg list item
 *
 * Return: number of bin digits printed
 */
int print_b(const va_list ls)
{
	unsigned int n;

	n = va_arg(ls, unsigned int);
	if ((int)n < 0)
		return (-1);

	print_bin(n);

	return (bin_digits(n));
}
