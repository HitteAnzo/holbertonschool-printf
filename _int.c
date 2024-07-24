#include "main.h"

/**
 * _int - print integer.
 * @args: arguments.
 *
 * Return: count chars.
 */

int _int(va_list args)
{
	long int num = va_arg(args, int);
	int numcount = 0;
	int mul = 1;
	long int div;

	if (num < 0)
	{
		numcount += _putchar('-');
		num *= -1;
	}

	if (num < 10)
		return (numcount += _putchar(num + '0'));

	div = num;

	while (div > 9)
	{
		mul *= 10;
		div /= 10;
	}
	while (mul >= 1)
	{
		numcount += _putchar(((num / mul) % 10) + '0');
		mul /= 10;
	}

	return (numcount);
}
