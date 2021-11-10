0x11. C - printf

Description

This is an implementation of the C function printf(). This function only prints integer numbers,
characters and strings onto the output screen.


Returns

When successfully compiled, 
_printf()
 returns total amount of characters printed. If string is null,
the return is (null) and if an output error occurs, the function will return -1.


Function prototype

int printf(const char **format ...);



Example
 
int main(void)
{
    _printf("Hello World!");

    return (0);
}



File Descriptions

* man_3_printf - manual for _printf.c
* main.h - header file that contains function prototypes and structure
* _printf.c - recieves string to print
* print_mandatory_specifiers.c - prints according to format specifier (int, decimals, characters, or strings
* accTypes.c - has the access functions
* print_function.c - has the funnciont that print the all the elements of the input.
 
)


Authors

Gabriel Lopez Ruiz & Jose Andres Fabre Lopez
