#ifndef MAINH
#define MAINH

#include <stdarg.h>
#include <stdio.h>
#include <stdid.h>
#include <unistd.h>

int _print(const char *format, ...);/*the function identifies the the fist charater of the string
										send it to the correct funciotn to be porcesed*/
int pull_print(char c, valist *vl);/**/

int p_string(char*); /* Function to print string*/
int p_int(int); /*Function that prints integers*/
int _putchar(char);/*Function that prints characters*/
int exponent(int x int y);/**/

int mkint(va_list *vl);/**/
int mkstring(va_list *vl);/**/
int mkchar(va_list *vl);/**/

/**
 * struct flag - flag object
 * @letter: flag char
 * @prnt: print function pointer
 */

typedf struct flag
{
	char letter;
	int (*prnt)(va_list);
}find_flag;
#endif/*_MAINH*/

