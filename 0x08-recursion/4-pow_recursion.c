#include "main.h"
/**
 * _pow_recursion - this function returns thr value of x raised to the
 * power y
 * @x: para1
 * @y: para2
 * Return: -1 when y is < 0
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
		return (1);
}
