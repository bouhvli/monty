#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * read_file - this will read the file.
 * @file_name: the name of the file given by the main function.
 * Desc: this function will print an error if the file doesn't exist
 * or the file can't be opened.
 */
void read_file(const char *file_name)
{
	FILE *file = fopen(file_name, "r");
	char line[MAX_LINE_LENGTH];
	char *token;
	int L_number = 1;
	instruction_t o;
	stack_t *stack = NULL;

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file_name);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, sizeof(line), file) != NULL)
	{
		token = strtok(line, DELIMITER);
		if (token != NULL && token[0] != '#')
		{
			o = op_function(token);
			check_instruction(o, token, L_number, stack);
			o.f(&stack, L_number);
			L_number++;
		}
		else
		{
			L_number++;
			continue;
		}
	}
	free_stack(stack);
	_close_file(file);
}
/**
 * main - the main function.
 * @argc: the number of args.
 * @argv: the array of args.
 * Return: 0 if everything is fine.
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	read_file(argv[1]);
	return (0);
}
