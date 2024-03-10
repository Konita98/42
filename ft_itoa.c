/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:02:31 by nerica-k          #+#    #+#             */
/*   Updated: 2024/03/03 18:02:56 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>
#include <stdio.h>*/
static long long	absolute(long long n)
{
	if (n < 0)
		return (n * (-1));
	return (n);
}

static long long	len_malloc(long long n)
{
	long long		i;
	long long		nb;

	i = 1;
	nb = absolute (n);
	if (n == -2147483648)
	{
		return (11);
	}
	if (n < 0)
	{
		while (nb >= 10)
		{
			i++;
			nb /= 10;
		}
		return (i + 1);
	}
	else
	{
		while (nb >= 10)
		{
			i++;
			nb /= 10;
		}
		return (i);
	}
	
}
//static char	*nb_to_str (int n);/
/*void	*ft_memcpy(void *d, const void *s, int n)
{
	char	*src;
	char	*dest;
	int		i;

	i = 0;
	src = (char *) s;
	dest = (char *) d;
	if (!d && !s)
		return (0);
	while (n != 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}*/

char	*ft_itoa(long long n)
{
	char	*result;
	long long		len;
	long long		nb;

	nb = absolute(n);
	len = len_malloc(n);
	result = (char *)malloc((len + 1)  * sizeof(char));
	//printf("malloc %d\n",(len_malloc(n) + 1));
	if (!result)
		return (NULL);
	/*if (n == -2147483648)
	{
		ft_memcpy((void *)result, "-2147483648", 12);
		result[12] = '\0';
		return (result);
	}*/
	if (n < 0)
		result[0] = 45;
	if (n == 0)
		result[len - 1] ='0';
	//result[len + 1] = '\0'; 
	while (nb != 0)
	{
		result[len - 1] = (nb % 10) + '0';
		nb /= 10; 
		len--;
	}
	return (result);
}

/*#include <stdio.h>
int main(void)
{
	char *result = ft_itoa(-2147483648);
	printf("ft existant---%s\n",result);
	free(result);
	return (0);
}*/
