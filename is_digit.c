#include "monty.h"
/**
 * _isdigit - check if the given string is number or not.
 * @c: the string.
 * Return: 0 if it is not a number or 1 if yes.
 */
int _isdigit(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[0] == '-')
			continue;
		if (c[i] < 48 || c[i] > 57)
			return (0);
	}
	return (1);
}
