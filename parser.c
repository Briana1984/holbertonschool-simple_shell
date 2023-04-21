#include "shell.h"

/**
* _env_parser- tokenizes the PATH
* @name: the full PATH seperated by :'s
* Return: an array of strings
**/
char **_env_parser(char *name)
{
int token_inc;
int tokencount;
char *tokenize = NULL;
int i;
char **p = NULL;
char *namestore = name;
tokencount = 0;
for (i = 0; name[i] != '\0'; i++)
{
if (name[i] == ':')
{
tokencount++;
}
}
p = malloc(sizeof(char *) * (tokencount + 2));
if (p != NULL)
{
token_inc = 0;
tokenize = strtok(name, ":");
while (token_inc < (tokencount + 1))
{
p[token_inc] = _strdup(tokenize);
tokenize = strtok(NULL, ":");
token_inc++;
}
p[token_inc] = NULL;
}
free(namestore);
return (p);
}
