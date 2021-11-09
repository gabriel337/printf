#include "main.h"

int get_print(char c, va_list *vl)
{
	int i;

	find_flag flags[] =  /* struct that connects to functions depending on the specifier*/
	{
		{'c', accChar},
		{'s', accString},
		{'\0', NULL}
	};

	for (i = 0; flags[i].letter != '\0'; i++)
	{
		if (flags[i].letter == c)
		{
			return (flags[i].print(vl));
		}
	}

	if (c == '%')
	{
		_putchar('%');
		return (1);
	}
	return (0);
}
