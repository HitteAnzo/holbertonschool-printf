#include "main.h"

/**
 * format - function specifiers
 * @type: conversion specifiers
 * @args: arguments
 * 
 * Return: numcount
 */

int _format(const char type, va_list args)
{
    int i = 0

    specifiers_t spec[] = {
        {'c', _char},
        {'s', _str},
        {'%', _percent},
        {'d', _int},
        {'i', _int},
        {0, NULL}
    };

    while(spec[i].specifiers)
    {
        if(type == spec[i].specifiers)
            numcount += spec[i].f(args);
        i++;
    }

    if (numcount == 0)
    {
        numcount += _putchar('%');
        numcount += _putchar(type);
    }

    return(numcount)
}