#include "main.h"

int accString(va_list *vl)
{
	return (print_string(va_arg(*vl, char *)));
}

int accChar(va_list *vl)
{
	return (_putchar(va_arg(*vl, int)));
}

