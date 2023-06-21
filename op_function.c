#include "monty.h"
/**
 * op_function - check if the instruction from the file is the right one
 * and return it.
 * @command: the command from the file.
 * Return:the right instruction or null if the command doesn't exist.
 */
instruction_t op_function(char *command)
{
	int index = 0;
	instruction_t function[] = {
		{"push", push_s}, {"pall", pall_s},
		{"pint", pint_s}, {"pop", pop_s},
		{"swap", swap_s}, {"add", add_s},
		{"sub", sub_s}, {"div", div_s},
		{"mul", mul_s}, {"mod", mod_s},
		{"nop", nop_s}, {NULL, NULL},
	};
	instruction_t default_isnt = {NULL, NULL};

	if (command == NULL)
		return (default_isnt);
	while ((function[index].f != NULL &&
			(strcmp(function[index].opcode, command) != 0)))
	{
		index++;
	}
	return (function[index]);
}
