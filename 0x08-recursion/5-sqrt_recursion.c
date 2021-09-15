#include "main.h"
/**
* sqroot - function finds the natural square root an a number
* @num: number whose root we seek
* @root: the root to be found
* Return: function returns natural square root if it exists
* if no natural square root, returns -1
*/
int sqroot(int num, int root)
{
	if (root * root == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (sqroot(num, root + 1));
}
/**
* _sqrt_recursion - function returns the natural square root of a number
* @n: number whose root is to be found
* Return: functions the natural root of number if it exists
* returns -1 if otherwise
*/
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqroot(n, root));
}
