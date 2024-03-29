/**
 * @file stack.h
 *
 * Interface for functions for working with stack
 *
 * IFJ project 2022
 *
 * @author <xklond00> Dominik Klon
 *
 */

#ifndef STACK
#define STACK

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define BRACKET_STACK_MAX 1000

typedef struct stack_elem
{
    char *stack_str;
} stack_elem;

typedef struct stack
{
    stack_elem *dataArray[BRACKET_STACK_MAX];
    int top;
} stack;

stack *stack_init();

void stack_dispose(stack *s);

void stack_push(stack *s, char *stack_str);

void stack_pop(stack *s);

stack_elem *stack_top(stack *s);

bool stack_is_empty(stack *s);

void print_and_pop(stack *s);

#endif
