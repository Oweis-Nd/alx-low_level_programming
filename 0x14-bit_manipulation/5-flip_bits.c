#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differnce, ans;
	unsigned int v, k;

	v = 0;
	ans = 1;
	differnce = n ^ m;
	for (k = 0; k < (sizeof(unsigned long int) * 8); k++)
	{
		if (ans == (differnce & ans))
			v++;
		ans <<= 1;
	}

	return (v);
}
