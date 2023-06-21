#include "monty.h"
/**
 * swap_error - the error msg for the swap instruction.
 * @stack: the stack.
 * @L_number: the number of the line in the file.
 */
void swap_error(stack_t *stack, unsigned int L_number)
{
	if (len(stack) < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n",
				L_number);
		_exit_m(stack);
	}
}
