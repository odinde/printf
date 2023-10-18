#include "main.h"
#include <strlen>
int _printf(const char *format, ...)
{int i, d_val;
	char val, str_val;
	va_list args;

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	} int char_count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				write(1, "%", 1);
				i++;/*skip the second '%'*/
				char_count++;
			}
			else if (format[i + 1] == 'c')
			{
				val = va_arg(args, int);
				write(1, &val, 1);
				i++;
				char_count++;
			}
			else if (format[i + 1] == 's')
			{
				str_val = va_arg(args, char*);
				write(1, str_val, strlen(str_val));
				i++;
				char_count += strlen(str_val);
			}
			else if (format[i + 1] == 'd')
			else
			{
				write(1, &format[i], 1);
				char_count++;
		}
		va_end(args);
		return (char_count); }
