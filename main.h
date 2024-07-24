#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

 /**
  * struct
  * 
  */

typedef struct specifiers
{
    char specifiers;
    int (*f)(va_list);
} specifiers_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _int (va_list args);
int _char (va_list args);
int _str (va_list args);
int _percent (va_list args);
int _format (char type, va_list args);


#endif
