#ifndef MAIN_H
#define MAIN_H
#define  _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <ctype.h>
#include <string.h>
#define MAX_LINE_LENGTH 1024
#define DELIMITER " \t\n"
extern FILE *file;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

instruction_t op_function(char *command);
void free_stack(stack_t *stack);
void _exit_m(stack_t *stack);
void check_fopen(stack_t *stack, FILE *file_name, char *name);
void check_instruction(instruction_t inst, char *command,
		int lineNumber, stack_t *stack);
void _close_file(FILE *file_disc);
void malloc_error(stack_t **stack);
int _isdigit(char *c);
/* stack functions */
stack_t *add_start(stack_t **h, const int value);
stack_t *add_end(stack_t **h, const int value);
size_t len(const stack_t *stack);
int delete_at_index(stack_t **stack, unsigned int index);
/* stack errors */
void push_error(stack_t *stack, unsigned int L_number);
void pint_error(stack_t *stack, unsigned int L_number);
void pop_error(stack_t *stack, unsigned int L_number);
void swap_error(stack_t *stack, unsigned int L_number);
void add_error(stack_t *stack, unsigned int L_number);
void sub_error(stack_t *stack, unsigned int L_number);
void mul_error(stack_t *stack, unsigned int L_number);
void div_error(stack_t *stack, unsigned int L_number, int number);
void mod_error(stack_t *stack, unsigned int L_number, int number);
void pchar_error(stack_t *stack, unsigned int L_number);
/*stack operations */
void push_s(stack_t **stack, unsigned int L_number);
void pall_s(stack_t **stack, unsigned int L_number);
void pint_s(stack_t **stack, unsigned int L_number);
void pop_s(stack_t **stack, unsigned int L_number);
void swap_s(stack_t **stack, unsigned int L_number);
void add_s(stack_t **stack, unsigned int L_number);
void sub_s(stack_t **stack, unsigned int L_number);
void mul_s(stack_t **stack, unsigned int L_number);
void div_s(stack_t **stack, unsigned int L_number);
void mod_s(stack_t **stack, unsigned int L_number);
void nop_s(stack_t **stack, unsigned int L_number);
void pchar_s(stack_t **stack, unsigned int L_number);
#endif
