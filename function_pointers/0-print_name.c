#include "function_pointers.h"

/**
 * print_name - prints a name
 * @prm_ptr_name: name of the person
 * @prm_ptr_function: function that prints
 *
 * Return: Nothing.
 */

void print_name(char *prm_ptr_name, void (*prm_ptr_function)(char *))
{
	if (prm_ptr_name != NULL || prm_ptr_function != NULL)
		prm_ptr_function(prm_ptr_name);
}
