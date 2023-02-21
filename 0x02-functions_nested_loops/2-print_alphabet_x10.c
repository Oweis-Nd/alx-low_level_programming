#include "main.h"

/**
 * print_alphabet_x10 - main alphabet x10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int count = 0;
	while (count++ <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	}
}
