#include "main.h"

/**
 * _format - function specifiers.
 * @type: conversion specifiers.
 * @args: arguments.
 * Return: specifier.
 */
int _format(const char type, va_list args)
{
	int i = 0;

	specifiers_t spec[] = {
		{'c', _char},
		{'s', _str},
		{'%', _percent},
		{'d', _int},
		{'i', _int},
		{0, NULL}
	};

	while (spec[i].specifiers)
	{
		if (type == spec[i].specifiers)
			return (spec[i].f(args));
		i++;
	}

	_putchar('%');
	_putchar(type);

	return (2);
}
