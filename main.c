#include "monty.h"
line_t linee;
/**
 * main - the monty program.
 * @argc: number.
 * @argv: array of command line.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	stack_t *stack = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
   	file = fopen(argv[1], "r");
	linee.file + file;
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	execute_file(&stack);
	fclose(file);
	free(linee.line);
	free_stack(stack);
	exit(EXIT_SUCCESS);
}
