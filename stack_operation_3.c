#include "monty.h"
/**
 * mod_s -  computes the rest of the division of the second top element
 * of the stack by the top element of the stack.
 * @stack: the stack.
 * @L_number: the number of the line.
 */
void mod_s(stack_t **stack, unsigned int L_number)
{
	int result;

	mod_error(*stack, L_number, (*stack)->n);
	result = (*stack)->next->n % (*stack)->n;
	pop_s(stack, L_number);
	(*stack)->n = result;
}
