#include "monty.h"
/**
 * push_s - pushes an element to the stack.
 * @stack: the stack.
 * @L_number: the number of the line in the file.
 */
void push_s(stack_t **stack, unsigned int L_number)
{
	char *number;
	int converted_number;

	converted_number = 0;
	number = strtok(NULL, DELIMITER);
	if (number != NULL && _isdigit(number) != 0)
	{
		converted_number = atoi(number);
		add_start(stack, converted_number);
	}
	else
		push_error(*stack, L_number);
}
/**
 * pall_s - prints all the values on the stack,
 * starting from the top of the stack.
 * @stack: the stack.
 * @L_number: the number of the line in the file.
*/
void pall_s(stack_t **stack, __attribute__ ((unused))unsigned int L_number)
{
	stack_t *tmp = *stack;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
/**
 * pint_s -  prints the value at the top of the stack, followed by a new line.
 * @stack: the stack.
 * @L_number: the number of the line in the file.
*/
void pint_s(stack_t **stack, unsigned int L_number)
{
	stack_t *tmp;

	tmp = *stack;
	pint_error(*stack, L_number);
	printf("%d\n", tmp->n);
}
/**
 * pop_s -  removes the top element of the stack.
 * @stack: the stack.
 * @L_number: the number of the line in the file.
 */
void pop_s(stack_t **stack, unsigned int L_number)
{
	pop_error(*stack, L_number);
	delete_at_index(stack, 0);
}
/**
 * swap_s - swaps the top two elements of the stack.
 * @stack: the stack.
 * @L_number: the number of the line in the file.
*/
void swap_s(stack_t **stack, unsigned int L_number)
{
	stack_t *tmp = *stack;
	int value;

	swap_error(tmp, L_number);
	value = tmp->n;
	tmp->n = tmp->next->n;
	tmp->next->n = value;
}
