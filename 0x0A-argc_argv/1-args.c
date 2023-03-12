#include <stdio.h>

/**
 * main - print the number of argument passed to it
 * @argc: argument count
 * @argv: argument
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
