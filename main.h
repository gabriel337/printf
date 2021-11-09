#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * get_print - manages the start of the function look up
 * print_string - fuction to print string
 * p_int - funtions that prints integers
 * _printf - printf function
 * _putchar - funcitons that prints characters
 * acc_string - function to acces the string
 * accChar - function to acces the char
 *
 *
 * @format: character to be evaluated
 * Return: print different formats
 */

int _printf(const char *format, ...);
int get_print(char c, va_list *vl);

int print_string(char *);
int p_int(int);
int _putchar(char);
int mkint(va_list *);
int accString(va_list *);
int accChar(va_list *);

/**
 * struct flag - flag object
 * @letter: flag char
 * @print: print pointer
 */

typedef struct flag
{
	char letter;
	int (*print)(va_list *);
} find_flag;
#endif/*MAIN_H*/

