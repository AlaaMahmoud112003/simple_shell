#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <string.h>

/*shell_string_functions*/
char *_strcopy(char *strdest, char *strsrc);
int _strlenght(char *lenstr);
char *_strcatenate(char *desten, char *source);
int _putchar_c(char char_c);
void _putint(char *str_put);

int _strcompare(char *str1, char *str2);
char *_strduplicate(char *str);

/*shell_fUnction*/
void exfunction(void);
int num_token(char *input);
void getcmd(char **inputcmd);
void execve_function(char *input_ex);
char *copy_inputcmd(char *input_command);
char *mypath(char *command);

#endif
