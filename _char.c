#include "main.h"

/**
 * _char _ function to print a char.
 * @args: list of arguments.
 * Return: c.
 */

int _char(va_list _args)
{
    char c = va_arg(args,  int);
    return (_putchar (c));
}