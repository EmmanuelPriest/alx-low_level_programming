#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *get_op_func - function that selects the correct function to perform
* the operation asked by the user
* @s: the operator passed as argument to the program
*
* Return: pointer to the function that corresponds
* to the operator given as a parameter
*/
int (*get_op_func(char *s))(int, int)
{
	/* Declaration of operators */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
    /* Trying to match operator to function */

	while (i < 5)
	{
		if (*s == *ops[i].op)
		{
			return (*(ops[i]).f);
		}
		i++;
	}
	/* not good operator, print error */
	return (NULL);
}
