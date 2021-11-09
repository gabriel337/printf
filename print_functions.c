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

/**
 * _putchar - writes the character c to stdout
 * @c: char to be printed
 * Return: if succesful 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int print_int(int num)
{
	if (num < 0)
    {
       _putchar('-');
       num = -num;
    }
	 if (num > 9)
	{
	   print_int(num / 10);

	}
	_putchar(num % 10 + '0');
	return (num);
}
