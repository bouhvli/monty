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
/**
 * pstr_s - prints the string starting at the top of the stack,
 * followed by a new line.
 * @stack: the stack.
 * @L_number: the number of the line.
*/
void pstr_s(stack_t **stack,
__attribute__ ((unused))unsigned int L_number)
{
	stack_t *tmp = *stack;

	if (len(tmp) != 0)
	{
		while (tmp)
		{
			if (isprint(tmp->n) && tmp->n != 0)
				printf("%c", tmp->n);
			else
				break;
			tmp = tmp->next;
		}
	}
	printf("\n");
}
/**
 * rotl_s - prints the string starting at the top of the stack,
 * followed by a new line.
 * @stack: the stack.
 * @L_number: the number of the line.
*/
void rotl_s(stack_t **stack, unsigned int L_number)
{
	int tmp_val;

	if (len(*stack) < 2 || stack == NULL)
		return;
	tmp_val = (*stack)->n;
	pop_s(stack, L_number);
	add_end(stack, tmp_val);
}
/**
 * rotr_s - prints the string starting at the top of the stack,
 * followed by a new line.
 * @stack: the stack.
 * @L_number: the number of the line.
*/
void rotr_s(stack_t **stack,
__attribute__ ((unused))unsigned int L_number)
{
	stack_t *tmp = *stack;
	int tmp_val, i = 0;

	if (len(*stack) < 2 || stack == NULL)
		return;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	tmp_val = tmp->n;
	delete_at_index(stack, i);
	add_start(stack, tmp_val);
}
