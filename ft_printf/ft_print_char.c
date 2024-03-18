#include "ft_printf.h"

int	ft_printchar(int c)
{
	ft_putchar(c);
	return (1);
}

int	ft_printstr(char *str)
{
	ft_putstr(str);
	return (ft_strlen(str));
}

int	ft_printnbr(int nbr)
{
	char	*nbwrd;
	nbwrd = ft_itoa(nbr);
	ft_printstr(nbwrd);
	return (ft_strlen(nbwrd));
}

unsigned long	ft_printptr(void *ptr)
{
	unsigned long	count;
	count = 0;
	count += write(1,"0x",2);
	count += ft_putnbr_hexa((unsigned long)ptr);
	return (count);
}
