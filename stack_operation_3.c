#include "monty.h"
/**
 * mod_s -  computes the rest of the division of the second top element
 * of the stack by the top element of the stack.
 * @stack: the stack.
 * @L_number: the number of the line.
 */
void mod_s(stack_t **stack, unsigned int L_number)
{
	mod_error(*stack, L_number, (*stack)->n);
	(*stack)->next->n = (*stack)->next->n % (*stack)->n;
	pop_s(stack, L_number);
}
/**
 * pchar_s - prints the char at the top of the stack, followed by a new line.
 * @stack: the stack.
 * @L_number: the number of the line.
*/
void pchar_s(stack_t **stack, unsigned int L_number)
{
	pchar_error(*stack, L_number);
	printf("%c\n", (*stack)->n);
}
