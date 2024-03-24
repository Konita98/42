
#include "ft_printf_tools.h"
#include <stdarg.h>

static int ft_print_acc_format(char format, va_list pt)
{
	if(format == 'c')
		return(ft_printchar(va_arg(pt, int)));
	else if(format == 's')
		return(ft_printstr(va_arg(pt, char *)));
	else if(format == 'd' || format == 'i')
		return(ft_printnbr(va_arg(pt, int)));
	else if(format == '%')
		return(ft_printchar('%'));
	else if(format == 'x')
		return(ft_putnbr_hexa(va_arg(pt, int)));
	else if(format == 'X')
		return(ft_toupper(ft_putnbr_hexa(va_arg(pt, int))));
	return(-1);
}

int ft_printf(const char *str, ...)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	va_list ptr;
	va_start(ptr, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			count = ft_print_acc_format(str[i + 1], ptr);
			i += 2;
		}
		else
			count += ft_printchar(str[i++]);
	}
	return(count);
}

#include <stdio.h>
int main(void)
{
	ft_printf("%s hellobitch %c%%","fjhs", 'z', 5);
	printf("\n%s hellobitch %c%%","fjhs", 'z');
	return 0;
}
