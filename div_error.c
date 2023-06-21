#include "monty.h"
/**
 * div_error - will print error msg if the length of the stack less than 2,
 * or number of the first element in the stack = 0.
 * @stack: the stack.
 * @L_number: the number of the line in the file we are reading from.
 * @number: number of the first element in the stack.
 */
void div_error(stack_t *stack, unsigned int L_number, int number)
{
	if (len(stack) < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", L_number);
		_exit_m(stack);
	}
	if (number == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", L_number);
		_exit_m(stack);
	}
}
