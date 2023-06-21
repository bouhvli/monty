#include "monty.h"
/**
 * malloc_error - check if the allocation is a success or not.
 * @stack: the stack to check.
 */
void malloc_error(stack_t **stack)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		_exit_m(*stack);
	}
}
