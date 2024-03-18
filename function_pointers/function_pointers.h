#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
void print_name(char *prm_ptr_name, void (*prm_ptr_function)(char *));
int int_index(int *array, int size, int (*cmp)(int));

#endif
