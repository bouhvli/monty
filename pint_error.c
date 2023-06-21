#include "main.h"
/**
 * pint_error - print the error related to the pint
 * @stack: the stack.
 * @L_number: the line number.
 */
void pint_error(stack_t *stack, unsigned int L_number)
{
	if (stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", L_number);
		_exit_m(stack);
	}
}
