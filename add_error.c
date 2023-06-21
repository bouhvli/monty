#include "main.h"
/**
 * add_error - this function test the stack length is it's less then 2,
 * it will print an error msg.
 * @stack: the stack.
 * @L_number: the number of the line.
 */
void add_error(stack_t *stack, unsigned int L_number)
{
	if (len(stack) < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", L_number);
		_exit_m(stack);
	}
}
