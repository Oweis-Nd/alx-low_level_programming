#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n;
	char *ptr;

	n = 1;
	ptr = (char *)&n;

	return (*ptr);
}
