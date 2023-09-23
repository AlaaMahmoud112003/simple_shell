#include "main.h"

/**
 * mypath -  function that return full the path for the command line
 * @command: the pointer to commands
 * Return: NULL
 */
char *mypath(char *command)
{
	char *my_path, *copypath, *path_cmd, *tokens;
	int lenght_cmd, len_tokens;
	struct stat buffers;

	my_path = getenv("PATH");
	if (my_path)
	{
		copypath = _strduplicate(my_path);
		lenght_cmd = _strlenght(command);
		tokens = strtok(copypath, ":");
		while (tokens != NULL)
		{
			len_tokens = _strlenght(tokens);
			path_cmd = malloc(lenght_cmd + len_tokens + 2);
			_strcopy(path_cmd, tokens);
			_strcatenate(path_cmd, "/");
			_strcatenate(path_cmd, command);
			_strcatenate(path_cmd, "\0");

			if (stat(path_cmd, &buffers) == 0)
			{
				free(copypath);
				return (path_cmd);
			}
			else
			{
				free(path_cmd);
				tokens = strtok(NULL, ":");
			}
		}
			free(copypath);
			if (stat(command, &buffers) == 0)
				return (command);
			return (NULL);
	}
	return (NULL);
}
