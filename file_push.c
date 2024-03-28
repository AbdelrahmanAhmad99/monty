#include "monty.h"

/**
 * file_push - b
 * Return: nothing
 */
void file_push(stack_t **stack, unsigned int line_number)
{
    int i, m = 0, flag = 0;

if (linee.arg)
{
   if (linee.arg[0] == '-')
	m++;
   for (; linee.arg[m] != '\0'; m++)
   {
      if (linee.arg[m] > 57 || linee.arg[m] < 48)
         flag = 1;
   }
   if (flag == 1)
   { fprintf(stderr, "L%d: usage: push integer\n", line_number);
	fclose(linee.file);
	free_stack(*stack);
	exit(EXIT_FAILURE);
   }
}
    else
    { fprintf(stderr, "L%d: usage: push integer\n", line_number);
	fclose(linee.file);
	free_stack(*stack);
	exit(EXIT_FAILURE);
    }
    i = atoi(linee.arg);

}
