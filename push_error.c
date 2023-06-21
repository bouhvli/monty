#include "monty.h"
/**
 * push_error - print the push error
 * @stack: the stack.
 * @L_number: number of the line.
 */
void push_error(stack_t *stack, unsigned int L_number)
{
	fprintf(stderr, "L%d: usage: push integer\n", L_number);
	_exit_m(stack);
}
