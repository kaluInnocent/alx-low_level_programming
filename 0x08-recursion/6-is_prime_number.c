#include "main.h"
/**
* divisible - function tests if factors of a given number can be found
* @num: number to be divided
* @div: the divisor
* Return: returns 1 if number not divisble, 0 otherwise
*/
int divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div == num / 2)
		return (1);
	return (divisible(num, div + 1));
}
/**
* is_prime_number - function tests if a given input number is prime
* @n: number to be tested for prime
* Return: returns 1 if prime and 0 otherwise
*/
int is_prime_number(int n)
{
	int start = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (divisible(n, start));
}
