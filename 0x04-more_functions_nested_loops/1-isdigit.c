#include <stdio.h>
#include "main.h"
/**
 *  _isdigit - a function that checks digit 0 to 9
 * @c: input
 * Return: 1 when c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
		if ((c >= 48) && (c <= 57))
		{
			return (1);
		}
	else
	{
	return (0);
	}
}
