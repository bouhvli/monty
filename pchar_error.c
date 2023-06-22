#include "monty.h"
/**
 * pchar_error - the error cases for pchar.
 * @stack: the stack.
 * @L_number: the number of the line in the file.
 */
void pchar_error(stack_t *stack, unsigned int L_number)
{
	if (len(stack) == 0)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", L_number);
		fclose(file);
		_exit_m(stack);
	}
	if (stack->n < 0 || stack->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n",
				L_number);
		fclose(file);
		_exit_m(stack);
	}
}
