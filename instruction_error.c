#include "main.h"
/**
 * check_instruction - check the presence of an instruction.
 * @inst: the instraction.
 * @command: the command from the file.
 * @lineNumber: the number of the line in the file.
 * @stack: the stack.
 */
void check_instruction(instruction_t inst, char *command,
		int lineNumber, stack_t *stack)
{
	if (inst.f == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n",
				lineNumber, command);
		_exit_m(stack);
	}
}
