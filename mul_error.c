#include "monty.h"
/**
 * mul_error - check the length is its less than 2,
 * print error msg.
 * @stack: the stack.
 * @L_number: the number of the line.
 */
void mul_error(stack_t *stack, unsigned int L_number)
{
	if (len(stack) < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", L_number);
		_exit_m(stack);
	}
}
