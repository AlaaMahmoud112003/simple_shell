#include "main.h"

/**
 * _strcompare - function that compare between two strings
 * @str1 : the pointer to the dest
 * @str2 : the pointer to the source
 * Return: result
 */
int _strcompare(char *str1, char *str2)
{
	int result = 0;

	while (*str1)
	{
		if (*str1 != *str2)
		{
			result = ((int)*str1 - 48) - ((int)*str2 - 48);
			break;
		}
		str1++;
		str2++;
	}
	return (result);

}

/**
 * _strduplicate - function that duplicate to new memory space in the location.
 * @str: data char
 * Return: memory
 */

char *_strduplicate(char *str)
{
	char *memory;
	int s = 0, x;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[s] != '\0'; s++)
		;
	memory = malloc(s + 1);
	if (memory == 0)
		return (NULL);
	for (x = 0; x < s; x++)
		memory[x] = str[x];
	return (memory);
}
