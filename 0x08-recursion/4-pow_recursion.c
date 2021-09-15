/**
* _pow_recursion - function returns the value of
* x raised to the power of y
* @x: is the radix or base
* @y: is the index
* Return: function returns the value of x to power y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
