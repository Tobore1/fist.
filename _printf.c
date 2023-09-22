#include "main.h"
/**
 * -this task 0 code 
 *  */
int _printf(const char *format, ...)
{
	unsigned int i, s_count, count = 0;
	
	va_list agr;
	
	va_start(agr,format);
	
	for (i = 0;  format[1] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
		
		}
		else if (format [i + 1] == 'c')
		{
			putchar(va_arg(agr, int));
			i++;
		}
		else if (format[i + 1]== 's')
		{
			s_count = puts(va_arg(agr,char *));
			i++;
			count += (s_count -1);
		}
		else if (format [i + 1] == '%' )
		{
			putchar('%');
		}
		count += 1;
	}	
	
	va_end (agr);
	return (count);


}	


