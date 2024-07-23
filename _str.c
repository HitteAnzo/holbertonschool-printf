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
        _putchar('N');
        _putchar('U');
        _putchar('L');
        _putchar('L');
        _putchar(')')
        return (6);
    }

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
    return (i);
}