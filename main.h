#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...); /* the function identifies the
                                         fist charater of the string
                                         and send it to the correct
                                         function to be processed */

int get_print(char c, va_list *vl);/*manages the start of the function look up*/

int print_string(char *); /* Function to print string*/
int p_int(int); /*Function that prints integers*/
int _putchar(char);/*Function that prints characters*/
int exponent(int x, int y);/**/

int mkint(va_list *);/**/
int accString(va_list *);/**/
int accChar(va_list *);/**/

/**
 * struct flag - flag object
 * @letter: flag char
 * @prnt: print function pointer
 */

typedef struct flag
{
	char letter;
	int (*print)(va_list *);
} find_flag;
#endif/*MAIN_H*/

