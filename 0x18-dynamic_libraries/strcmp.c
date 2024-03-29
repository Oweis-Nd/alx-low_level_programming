#include "main.h"
/**
 * _strcmp - a function that compares two strings
 *
 * @s1: string 1 input to compare
 * @s2: against this other string 2
 *
 * Return: 0 if s1 and s2 are equal negative integer
 * if the stopping character in @s1 was less than than
 * the stopping character in @s2
 * positive integer if the stopping character in @s1
 * was greater than the stopping character in @s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
