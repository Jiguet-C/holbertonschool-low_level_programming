#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
void print_name(char *prm_ptr_name, void (*prm_ptr_function)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
