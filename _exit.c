#include "monty.h"
/**
 * _exit_m - exit the program when it's called.
 * @stack: takes the stack.
 */
void _exit_m(stack_t *stack)
{
	if (stack != NULL)
		free_stack(stack);
	exit(EXIT_FAILURE);
}
/**
 * free_stack - as the name says.
 * @stack: takes the stack we want to free.
 */
void free_stack(stack_t *stack)
{
	stack_t *tmp = NULL;

	while (stack != NULL)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
}
