#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

_putchar(char c);
int _printf(const char *format, ...);
int _int (va_list list);
int _char (va_list list);
int _str (va_list list);
int _percent (va_list list);
int _format (va_list list);


#endif