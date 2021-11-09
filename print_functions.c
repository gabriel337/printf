#include "main.h"

/**
* print_string - prints string
* @str: string to be printed 
* Return: returns the string
*/
int print_string(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

int accString(va_list *vl)
{
	return (print_string(va_arg(*vl, char *)));
}


/**
 * _putchar - writes the character c to stdout
 * @c: char to be printed
 * Return: if succesful 1
 */
 int _putchar(char c)
{
	return (write(1, &c, 1));
}

int accChar(va_list *vl)
{
	return (_putchar(va_arg(*vl, int)));
}
