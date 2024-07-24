#include "main.h"

/**
 * _printf - printf command.
 *
 * @format: specifier.
 *
 * Return: numcount.
 */
int _printf(const char *format, ...)
{
	int i = 0, numcount = 0;
	va_list args;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		/*check if format is '%' followed by null */
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
	       /*check if format is '%' followed by space and null*/
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			numcount += _format(format[i + 1], args);/*take the specifier*/
			i++;
		}
		else
		{
			numcount++;
			_putchar(format[i]);
		}
	}
	va_end(args);
	return (numcount);
}
