#include "main.h"

/**
 * copy_inputcmd - function that copy string to for dynamic the memory
 *
 * @input_command: the pointer to input command
 *
 * Return: in_cpy.
 */

char *copy_inputcmd(char *input_command)
{
	char *in_cpy = NULL;

	in_cpy = malloc(_strlenght(input_command));
	if (in_cpy == NULL)
	{
		perror("tsh: memory allocation error");
		exfunction();
	}
	_strcopy(in_cpy, input_command);
	return (in_cpy);
}

/**
 * num_token - function that counts the tokens in interperter
 * @num_input: the pointer to number of input
 *
 * Return: num
 */
int num_token(char *num_input)
{
	char *toke;
	int num = 1;

	toke = strtok(num_input, " ");
	while (toke != NULL)
	{
		num++;
		toke = strtok(NULL, " ");
	}
	return (num);
}

/**
 * execve_function - function that executes the command
 * @input_ex: a pointer to input
 */
void execve_function(char *input_ex)
{
	char **avgs, *tokes, *tok_cpy = NULL, *cmd_line;
	int ind = 0, input_count;
	pid_t pidd;

	tok_cpy = copy_inputcmd(input_ex);
	input_count = num_token(input_ex);
	avgs = malloc(sizeof(char *) * input_count);
	tokes = strtok(tok_cpy, " ");
	while (tokes != NULL && ind <= input_count)
	{
		avgs[ind] = malloc(_strlenght(tokes));
		avgs[ind++] = tokes;
		tokes = strtok(NULL, " ");
	}
	avgs[ind] = NULL;
	if (!_strcompare(avgs[0], "exit"))
		exit(1);
	pidd = fork();
	if (pidd == 0)
	{
		cmd_line = mypath(avgs[0]);
		if (execve(cmd_line, avgs, NULL) == -1)
		{
			perror("Error executing command");
			exit(1);
		}
		free(cmd_line);
	}
	else if (pidd > 0)
		wait(NULL);
	else
	{
		perror("Error forking");
		exit(1);
	}
	free(avgs);
	free(tok_cpy);
}
