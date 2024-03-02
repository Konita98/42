/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:44:59 by nerica-k          #+#    #+#             */
/*   Updated: 2024/03/02 12:45:24 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		l1;
	int		l2;

	i = 0;
	str = (char *)malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2)) * sizeof(char));
	if (str == 0)
	{
		str = NULL;
	}
	while ((*s1 != '\0'))
	{
		*str = *s1;
		str++;
		s1++;
	}
	while ((*s2 != '\0'))
	{
		*str = *s2;
		str++;
		s2++;
	}
	*str = '\0';
	return (str - l1 - l2);
}

/*#include <stdio.h>
int main(void)
{
	printf("ft existant %s\n",ft_strjoin("coucou", "tout le monde"));
	//printf("ft cree %s\n",substr("coucouc tout le monde", 5, 5));
	return (0);
}*/