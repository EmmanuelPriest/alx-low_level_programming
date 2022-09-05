#include <stdio.h>

int add(a, b);
int sub(a, b);
int mul(a, b);
int div(a, b);
int mod(a, b);

/**
* add - function that adds 2 ints
* @a: int
* @b: int
*
* Return: addition of a and b
*/
int add(a, b)
{
	return (a + b);
}

/**
* sub - function that substracts 2 ints
* @a: int
* @b: int
*
* Return: substraction of a and b
*/
int sub(a, b)
{
	return (a - b);
}

/**
* mul - function that multiplies 2 ints
* @a: int
* @b: int
*
* Return: multiplication of a and b
*/
int mul(a, b)
{
	return (a * b);
}

/**
* div - function that divides 2 ints
* @a: int
* @b: int
*
* Return: division of a and b
*/
int div(a, b)
{
	return (a / b);
}

/**
* mod - function that returns remainder of 2 int division
* @a: int
* @b: int
*
* Return: modulo of a and b
*/
int mod(a, b)
{
	return (a % b);
}
