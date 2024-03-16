/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:02:31 by nerica-k          #+#    #+#             */
/*   Updated: 2024/03/12 13:33:02 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
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
		return (11);
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

char	*ft_itoa(long long n)
{
	char			*result;
	long long		len;
	long long		nb;

	nb = absolute(n);
	len = len_malloc(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	//printf("%lld", (len + 1));
	if (!result)
		return (0);
	if (n < 0)
		result[0] = 45;
	if (nb == 0)
		result[0] = '0';
	result[len] = '\0';
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
	char *result = ft_itoa(-5859);
	printf("ft existant %s\n",result);
	free(result);
	return (0);
}*/
