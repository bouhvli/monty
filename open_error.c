#include "main.h"
/**
 * check_fopen - check if the file is open or not.
 * @stack: the stack.
 * @file_name:the file descriptor.
 * @name: the name of the fale.
 */
void check_fopen(stack_t *stack, FILE *file_name, char *name)
{
	if (file_name == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", name);
		_exit_m(stack);
	}
}
