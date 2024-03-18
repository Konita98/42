#include <unistd.h>

unsigned long	ft_putnbr_hexa(unsigned int n)
{
	char	hex;
	char	ch;
	int	count;

	count = 0;
	if (n >= 16)
	{
		ft_putnbr_hexa(n / 16);
		ft_putnbr_hexa(n % 16);
	}
	else if (n <= 9)
	{
		ch = n + '0';
		count += write(1, &ch, 1);
		
	}
	else if (n >= 10 && n <= 15)
	{
		hex = n % 10 + 'a';
		count = write(1, &hex,1);
	}
	return(0); 
}
