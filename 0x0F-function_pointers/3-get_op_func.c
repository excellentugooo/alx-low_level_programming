#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform
 * the operation asked by the user.
 * @s: operator passed as argument
 *
 * Return: A pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t select[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int x = 0;

	while (select[x].op != NULL && *(select[x].op) != *s)
	{
		x++;
	}
	return (select[x].f);
}


