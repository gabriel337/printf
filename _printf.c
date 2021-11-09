#include "main.h"

/**
 * _printf - prints different formats
 * @format: start of the list
 * Return: returns result
 */
int _printf(const char *format, ...)
{
	unsigned int i, result;
	va_list vl;

	va_start(vl, format); /* pointing to format */

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%') /*if i is the same as % then verify the next char and call the function*/
		{
			result += get_print(format[i + 1], &vl);
			i++;
		}
		else /*if not then print each char (string)*/
		{
			_putchar(format[i]);
			result++;
		}
	}
	va_end(vl);
	return (result);
}
