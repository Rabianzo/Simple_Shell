#include "shell.h"

/**
<<<<<<< HEAD
 * _myenv - prints the current environment
 * @info: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
=======
 * _myenv -  this  prints the current environ
 * @info: this struct containing potential arguments.to maintain constant function prototype.
>>>>>>> 65b8d29497abe88e98705139350973d4829a6d79
 * Return: Always 0
 */
int _myenv(info_t *info)
{
	print_list_str(info->env);
	return (0);
}
<<<<<<< HEAD
/**
 * _getenv - gets the value of an environ variable
 * @info: Structure containing potential arguments. Used to maintain
=======

/**
 * _getenv - gets the value of an environ variable
 * @info:  this struct containing potential arguments. 
>>>>>>> 65b8d29497abe88e98705139350973d4829a6d79
 * @name: env var name
 *
 * Return: the value
 */
char *_getenv(info_t *info, const char *name)
{
	list_t *node = info->env;
<<<<<<< HEAD
	char *p;

	while (node)
	{
		p = starts_with(node->str, name);
		if (p && *p)
			return (p);
=======
	char *q;

	while (node)
	{
		q = starts_with(node->str, name);
		if (q && *q)
			return (q);
>>>>>>> 65b8d29497abe88e98705139350973d4829a6d79
		node = node->next;
	}
	return (NULL);
}
<<<<<<< HEAD
/**
 * _mysetenv - Initialize a new environment variable,
 *             or modify an existing one
 * @info: Structure containing potential arguments. Used to maintain
 *        constant function prototype.
=======

/**
 * _mysetenv -  this Initialize a new environment variable,
 *             or modify an existing one
 * @info: this struct  containing potential arguments.
>>>>>>> 65b8d29497abe88e98705139350973d4829a6d79
 *  Return: Always 0
 */
int _mysetenv(info_t *info)
{
	if (info->argc != 3)
	{
		_eputs("Incorrect number of arguements\n");
		return (1);
	}
	if (_setenv(info, info->argv[1], info->argv[2]))
		return (0);
	return (1);
}
<<<<<<< HEAD
/**
 * _myunsetenv - Remove an environment variable
 * @info: Structure containing potential arguments. Used to maintain
 *        constant function prototype.
 *  Return: Always 0
=======

/**
 * _myunsetenv -  this remove an environment variable
 * @info: this struct containing potential arguments. Used  to maintain function prototype.
 * Return: Always 0
>>>>>>> 65b8d29497abe88e98705139350973d4829a6d79
 */
int _myunsetenv(info_t *info)
{
	int i;

	if (info->argc == 1)
	{
		_eputs("Too few arguements.\n");
		return (1);
	}
	for (i = 1; i <= info->argc; i++)
		_unsetenv(info, info->argv[i]);
<<<<<<< HEAD
	return (0);
}
/**
 * populate_env_list - populates env linked list
 * @info: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
=======

	return (0);
}

/**
 * populate_env_list - populates env linked list
 * @info: this structure containing potential arguments
>>>>>>> 65b8d29497abe88e98705139350973d4829a6d79
 * Return: Always 0
 */
int populate_env_list(info_t *info)
{
	list_t *node = NULL;
	size_t i;

	for (i = 0; environ[i]; i++)
		add_node_end(&node, environ[i], 0);
	info->env = node;
	return (0);
}
<<<<<<< HEAD
=======

>>>>>>> 65b8d29497abe88e98705139350973d4829a6d79
