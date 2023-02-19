#include <stdio.h>

/**
 * main - prints all single digit number of base 10 starting from 0,
 * only using putchar and without char variables.
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = '0'; num < '9'; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
