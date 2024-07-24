#include "main.h"

/**
 * _char - function to print a char.
 * @args: list of arguments.
 * Return: c.
 */
int _char(va_list args)
{
	char c = va_arg(args,  int);

	return (_putchar (c));
}
