#include "main.h"

/**
 * _strlen - finds the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ptr;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	ptr = open(filename, O_WRONLY | O_APPEND);
	if (ptr == -1)
		return (-1);
	if (text_content != NULL)
		len = write(ptr, text_content, _strlen(text_content));
	close(ptr);
	if (len == -1)
		return (-1);
	return (1);
}
