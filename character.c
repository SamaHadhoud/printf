#include "main.h"

/**
 * print_c - Print a character (%c)
 * @valist: Store the a list of characters
 * Return: number of characters printed
 */

int print_c(va_list valist)
{
	int c = va_arg(valist, int);

	return (_putchar(c));
}

/**
* print_s - print string (%s)
* @valist: Store the a list of characters
* Return: num of characters printed
*/
int print_s(va_list valist)
{
	int i, count = 0;
	char *str;

	str = va_arg(valist, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
		count += _putchar(str[i]);
	return (count);
}
