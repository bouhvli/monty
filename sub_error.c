#include "monty.h"
/**
 * sub_error - the error message for the sub instruction.
 * @stack: the stack.
 * @L_number: the number of the line in the file.
 */
void sub_error(stack_t *stack, unsigned int L_number)
{
	if (len(stack) < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", L_number);
		_exit_m(stack);
	}
}
