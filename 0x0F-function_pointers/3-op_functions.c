#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* op_add - function to add two integers
* @a: an integer variable
* @b: another integer variable
*
* Return: the sum of a and b
*/
int op_add(int a, int b)
{
	int sum = (a + b);
	{
		return (sum);
	}
}

/**
* op_sub - function to substract two integers
* @a: an integer variable
* @b: another integer variable
*
* Return: the difference of a and b
*/
int op_sub(int a, int b)
{
	int difference = (a - b);
	{
		return (difference);
	}
}

/**
* op_mul - function that multiplies two integers
* @a: an integer variable
* @b: another integer variable
*
* Return: the product of a and b
*/
int op_mul(int a, int b)
{
	int product = (a * b);
	{
		return (product);
	}
}

/**
* op_div - function that divides two integers
* @a: an integer variable
* @b: another integer variable
*
* Return: the result of the division of a by b
*/
int op_div(int a, int b)
{
	int division = (a / b);
	{
		if (b != 0)
			return (division);
		printf("Error\n");
		exit(100);
	}
}

/**
 * op_mod - function that returns the remainder of
 * the division of two integers
 * @a: an integer variable
 * @b: another integer variable
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	int remainder = (a % b);
	{
		if (b != 0)
			return (remainder);
		printf("Error\n");
		exit(100);
	}
}
