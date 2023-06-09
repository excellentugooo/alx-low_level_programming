#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *ops;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	ops = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(ops) == NULL || ops[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*ops == '/' && num2 == 0) ||
	    (*ops == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(ops)(num1, num2));

	return (0);
}
