#include "shell.h"

/**
 * _get_env - gets the current env
 * @env: the env
 * Return: _env_parser function on success, NULL on failure
**/
char **_get_env(char *env)
{
int inner;
int outer;
char *name = NULL;
for (outer = 0; environ[outer] != NULL; outer++)
{
for (inner = 0; environ[outer][inner] != '='; inner++)
{
if (environ[outer][inner] != env[inner])
break;
if (environ[outer][inner] == env[inner])
{
if (env[inner + 1] == '\0' && environ[outer][inner + 1] == '=')
{
name = _strdup(&(environ[outer][inner + 2]));
return (_env_parser(name));
}
}
}
}
return (NULL);
}
/**
 * sh_alias - checks for an alias
 * @argv: arguments
 * Return: 0
**/
int sh_alias(char **argv)
{
argv = argv;
return (0);
}
