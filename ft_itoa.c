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

static int	absolute(int n)
{
	if (n < 0)
		return (n * (-1));
	return (n);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	int		nb;

	i = 1;
	nb = absolute(n);
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
		i++;
	while (nb >= 10)
	{
		i++;
		nb /= 10;
	}
	result = (char *)malloc((i) * sizeof(char));
	if (n < 0)
		result[0] = 45;
	result[i] = '\0';
	while (i-- > 1)
	{
		result[i] = (absolute(n) % 10) + '0';
		n /= 10;
	}
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	int i;
	i = -21474865;
	printf("ft existant %s\n",ft_itoa(i));
	return (0);
}*/
