
#include "ft_printf_tools.h"
int ft_printchar(int c)
{
	ft_putchar(c);
	return(1);
}

int ft_printstr(char *str)
{
	ft_putstr(str);
	return(ft_strlen(str));
}

int ft_printnbr(int nbr)
{
	char	*nbwrd;
	nbwrd = ft_itoa(nbr);
	ft_printstr(nbwrd);
	return(ft_strlen(nbwrd));
}

/*int ft_printpercent()
{
	ft_putchar_fd('%', 1);
	return(1);
}*/
