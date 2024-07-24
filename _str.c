#include "main.h"

/**
 * _str - function to print a string.
 * @args: list of arguments.
 * Return: i.
 */
int _str(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}

	if (str[i] == '\0')
	{
		return (0);
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
