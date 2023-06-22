#include "monty.h"
/**
 * add_start - add anode to the stack.
 * @h: the head of the stack.
 * @value: the value of the new node.
 * Return: the stack or null if somthing is wrong.
 */
stack_t *add_start(stack_t **h, const int value)
{
	stack_t *new_node = NULL;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->next = (*h);
	new_node->prev = NULL;
	if ((*h) != NULL)
		(*h)->prev = new_node;
	(*h) = new_node;
	return (*h);
}
/**
 * add_end - add node at the end.
 * @h: the stack.
 * @value: the value of the new stack.
 * Return: the stack or null if somthing wrong.
*/
stack_t *add_end(stack_t **h, const int value)
{
	stack_t *new_node = NULL;
	stack_t *tmp = *h;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->next = NULL;
	if (*h == NULL)
	{
		new_node->prev = NULL;
		(*h) = new_node;
		return (*h);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	new_node->prev = tmp;
	return (*h);
}
/**
 * len - get the length of a stack.
 * @stack: the stack.
 * Return: the length of the stack or 0 if it's null.
*/
size_t len(const stack_t *stack)
{
	const stack_t *tmp;
	size_t count = 0;

	if (stack == NULL)
		return (count);
	tmp = stack;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
/**
 * delete_at_index - delete node at given index.
 * @stack: the stack.
 * @index: the index of the node to delete.
 * Return: -1 if failed or 1 otherwise.
*/
int delete_at_index(stack_t **stack, unsigned int index)
{
	stack_t *tmp = (*stack), *fast = NULL, *slow = NULL;
	unsigned int i = 0;

	if (*stack == NULL)
		return (-1);
	if (index >= len(tmp))
		return (-1);
	else if (index == 0)
	{
		if (tmp->next != NULL)
			tmp->next->prev = NULL;
		*stack = tmp->next;
	}
	else
	{
		while (tmp->next != NULL && i < index)
		{
			tmp = tmp->next;
			i++;
		}
		slow = tmp->prev;
		fast = tmp->next;
		if (slow != NULL)
			slow->next = fast;
		if (fast != NULL)
			fast->prev = slow;
	}
	free(tmp);
	tmp = NULL;
	return (1);
}
