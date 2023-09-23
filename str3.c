#include "main.h"

/**
 * _strlenght - function that returns the length of a string .
 * @lenstr : data
 * Return: lenght
 */

int _strlenght(char *lenstr)
{
	int lenght = 0;

	while (*lenstr != '\0')
	{
		lenght++;
		lenstr++;
	}
	return (lenght);
}

/**
 * _strcopy - function that copy the string pointed .
 * @strdest : the pointer to dest
 * @strsrc : the pointer to source
 *
 * Return: strdest
 */

char *_strcopy(char *strdest, char *strsrc)
{
	int z = -1;

	do {
		z++;
		strdest[z] = strsrc[z];
	} while (strsrc[z] != '\0');
	return (strdest);
}
