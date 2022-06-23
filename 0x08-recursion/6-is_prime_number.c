#include "main.h"

int check_prime(int, int);

/**
 * is_prime_number - function that prints a prime number
 * @n: input interger
 * Return: 1
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - for checking prime numbers
 * @n: num
 * @m: another num
 * Return: 1 or 0
 */
int check_prime(int n, int m)
{
	if (n <= 1)
		return (0);
	if (n % m == 0 && m > 1)
		return (0);
	if ((n / m) < m)
		return (1);
	return (check_prime(n, m + 1));
}
