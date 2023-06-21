#include "monty.h"
/**
 * pop_error - print the error related to the pop instruction if the
 * condition is true.
 * @stack: the stack.
 * @L_number: the number of the line.
 */
void pop_error(stack_t *stack, unsigned int L_number)
{
	if (stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", L_number);
		_exit_m(stack);
	}
}
