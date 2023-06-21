#include "main.h"
/**
 * mod_error - check the length and number if its less than 2 and number == 0,
 * print error message.
 * @stack: the stack.
 * @L_number: the number of the line.
 * @number: the number from the stack to check.
 */
void mod_error(stack_t *stack, unsigned int L_number, int number)
{
	if (len(stack) < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", L_number);
		_exit_m(stack);
	}
	if (number == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", L_number);
		_exit_m(stack);
	}
}
