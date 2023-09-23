#include "main.h"

/**
 * _putchar_c - function that writes the character of c to stdout.
 * @char_c: The character to print
 *
 * Return: on successed 1
 *	   on failed -1
 */

int _putchar_c(char char_c)
{
	return (write(1, &char_c, 1));
}

/**
 * _putint - function that updates value it points to 98.
 * @str_put : pointer to intger
 *
 */

void _putint(char *str_put)
{
	while (*str_put != '\0')
	{
		putchar(*str_put);
		str_put++;
	}
	putchar('\n');
}

/**
 *_strcatenate - function that concatenates between two strings.
 * @desten : the pointer to dest
 * @source : the pointer to source
 *
 * Return: desten
 *
 */

char *_strcatenate(char *desten, char *source)
{
	int strc1 = 0, strc2;

	while (desten[strc1])
		strc1++;
	for (strc2 = 0; source[strc2]; strc2++)
		desten[strc1++] = source[strc2];
	return (desten);
}
