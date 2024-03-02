/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:56:56 by nerica-k          #+#    #+#             */
/*   Updated: 2024/03/02 11:57:39 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	char			*str;
	unsigned int	i;

	i = start;
	str = (char *) s;
	substr = (char *)malloc(len * sizeof(char));
	if (substr == 0)
	{
		substr = NULL;
	}
	while (i < start + len)
	{
		*substr = str[i];
		substr++;
		i++;
	}
	return (substr - len);
}
/*
#include <stdio.h>
int main(void)
{
	printf("ft existant %s\n",ft_substr("coucouc tout le monde", 8, 4));
	//printf("ft cree %s\n",substr("coucouc tout le monde", 5, 5));
	return (0);
}*/
