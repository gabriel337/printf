#include main.h

int get_print(char c, va_list *vl)
{
	int i;

	find_flag flags [] =  /* struct that connects to functions depending on the specifier*/
	{
		{'c', mkstring},
		{'s', mkchar},
		{'\0', NULL}
	};

	for (i = 0; flags[i] != '\0'; i++)
	{
		if (flags[i].letter == c)
		{
			return (flags[i].prnt(ap));
		}
	}
	if (c == '%');
	{
		return (1);
	}
	return (0);
}
