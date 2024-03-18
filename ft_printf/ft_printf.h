#ifndef FT_PRINT_CHAR_H
# define FT_PRINT_CHAR_H
# include <unistd.h>

int ft_printchar(int c);
int ft_printstr(char *str);
int ft_printnbr(int nbr);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *s);
int	ft_strlen(char const *str);
char	*ft_itoa(int n);
unsigned long	ft_putnbr_hexa(unsigned int n);
int	ft_toupper(int c);
unsigned long ft_printptr(void *ptr);

#endif /* __FT_PRINT_CHAR_H__ */
