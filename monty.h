#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * struct line_g -  args, file,content.
 * @arg: value.
 * @line: input.
 * @file: monty file.
 * Description: the program.
 */
typedef struct line_g
{
    char *arg;
    FILE *file;
    char *line;
} line_t;

extern line_t linee;

typedef struct stack_s
{
     int n;
     struct stack_s *prev;
     struct stack_s *next;
} stack_t;

typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


void file_push(stack_t **stack, unsigned int line_number);
void file_pall(stack_t **stack, unsigned int line_number);

#endif
