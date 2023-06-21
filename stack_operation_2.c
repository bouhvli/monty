#include "main.h"
/**
 * add_s -  adds the top two elements of the stack.
 * @stack: the stack.
 * @L_number: the number of the line in the file.
 */
void add_s(stack_t **stack, unsigned int L_number)
{
	int result;

	add_error(*stack, L_number);
	result = (*stack)->n + (*stack)->next->n;
	pop_s(stack, 0);
	(*stack)->n = result;
}
/**
 * nop_s - doesn’t do anything.
 * @stack: the stak.
 * @L_number: the number of the line in the file.
 */
void nop_s(__attribute__ ((unused))stack_t **stack,
__attribute__ ((unused))unsigned int L_number)
{
}
/**
 * sub_s -  subtracts the top element of the stack from the
 * second top element of the stack.
 * @stack: the stack.
 * @L_number: the number of the line in the file.
 */
void sub_s(stack_t **stack, unsigned int L_number)
{
	int result;

	sub_error(*stack, L_number);
	result = (*stack)->n - (*stack)->next->n;
	pop_s(stack, 0);
	(*stack)->n = result;
}
/**
 * mul_s -  multiplies the second top element of the stack with
 * the top element of the stack.
 * @stack: the stack.
 * @L_number: the number of the line in the file.
 */
void mul_s(stack_t **stack, unsigned int L_number)
{
	int result;

	mul_error(*stack, L_number);
	result = (*stack)->n * (*stack)->next->n;
	pop_s(stack, 0);
	(*stack)->n = result;
}
/**
 * div_s -  divides the second top element of the stack by the
 * top element of the stack.
 * @stack: the stack.
 * @L_number: the number of the line in the file.
 */
void div_s(stack_t **stack, unsigned int L_number)
{
	int result;

	div_error(*stack, L_number, (*stack)->n);
	result = (*stack)->n / (*stack)->next->n;
	pop_s(stack, 0);
	(*stack)->n = result;
}
