#include "main.h"

/**
* _printf - function to print in console
* @format: character stringe
* Return: number of character printed
**/

int _printf(const char *format, ...)
{
	int count;

	if (format != NULL)
	{
		int i;
		va_list valist;
		int (*f)(va_list);

		va_start(valist, format);
		count = 0;

		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
					count += _putchar(format[++i]);
				else if (format[i + 1] != '\0')
				{
					f = get_func(format[i + 1]);
					if (f != NULL)
						count += f(valist);
					else
					{
						count += _putchar(format[i]);
						count += _putchar(format[i + 1]);
					}
					i++;
				}
				else
					return (-1);
			}
			else
				count += _putchar(format[i]);
		}
		va_end(valist);
	}
	return (count);
}
