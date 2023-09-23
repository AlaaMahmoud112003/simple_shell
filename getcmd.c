#include "main.h"

/**
 * getcmd - function that get command from stand for the output
 * @inputcmd: the pointer to the string
 */
void getcmd(char **inputcmd)
{
	size_t lenght = 0;
	int len_input;

	len_input = getline(inputcmd, &lenght, stdin);
	lenght = _strlenght(*inputcmd);
	if (len_input == -1)
		exfunction();
	if (lenght == 0)
		return;
	if (lenght > 0 && (*inputcmd)[lenght - 1] == '\n')
		(*inputcmd)[lenght - 1] = '\0';
}
