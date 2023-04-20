#ifndef SHELL_H
#define SHELL_H

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <errno.h>
#include <strings.h>
#include <stddef.h>
#include <dirent.h>
#include <signal.h>

/**
 * struct builtins - struct with builtin commands
 * @argv: arg passed as command
 * @func: correlations function
 * description: this is to handle the builtins
 */
typedef struct builtins
{
	char *argv;
	int (*func)();
} builtins;

int _strcmp(char *s1, char *s2);
int stringlength(char *s);
char *_strdup(char *str);
int _putchar(char c);
void dubbie_free(char **dubbie_pointie);
int sh_exit(char **argv, char *buffer);
int sh_env(void);



#endif










