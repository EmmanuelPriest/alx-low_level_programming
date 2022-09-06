#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
* add - function that adds 2 ints
* @a: int
* @b: int
*
* Return: addition of a and b
*/
int add(int a, int b)
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
int sub(int a, int b)
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
int mul(int a, int b)
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
int div(int a, int b)
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
int mod(int a, int b)
{
	return (a % b);
}
