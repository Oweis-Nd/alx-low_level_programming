#include "main.h"
/**
 * _power - calculate (base and power)
 * @base: base of the exponet
 * @pow: power of the exponet
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int number;
	unsigned int j;

	number = 1;
	for (j = 1; j <= pow; j++)
		number *= base;
	return (number);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int devp, result;
	char flag;

	flag = 0;
	devp = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (devp != 0)
	{
		result = n & devp;
		if (result == devp)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || devp == 1)
		{
			_putchar('0');
		}
		devp >>= 1;
	}
}
