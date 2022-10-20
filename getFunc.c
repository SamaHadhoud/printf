#include "main.h"

/**
* get_func - search and return the needed function
* @s: array to check
* Return: return a function or NULL if not found
**/

int (*get_func(char s))(va_list)
{
	op_t ops[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};

	int i;

	for (i = 0; ops[i].c != NULL; i++)
	{
		if (*ops[i].c == s)
			return (ops[i].f);
	}
	return (NULL);
}
