/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 09:38:34 by nerica-k          #+#    #+#             */
/*   Updated: 2024/03/03 09:39:02 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	occurence(char const	*set, char c)
{
	while (*set != '\0')
	{
		if (*set == c)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

static char	*trimmed_word(char const *s1, char const *set)
{
	int	i;
	char	*trimmed;

	i = 0;
	trimmed = (char *)malloc((ft_strlen((char *)s1) + 1) * sizeof(char));
	while ((occurence (set, *s1) == 1) && *s1 != '\0')
		s1++;
	while (*s1 != '\0')
	{
		trimmed[i] = *s1;
		s1++;
		i++;
	}
	trimmed[i] = '\0';
	i--;
	while (occurence (set, trimmed[i]) == 1)
	{
		trimmed[i] = '\0';
		i--;
	}
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	char	*trimmed_mal;
	int		i;
	
	i = 0;
	trimmed = trimmed_word(s1, set);
	trimmed_mal = (char *)malloc((ft_strlen(trimmed) + 1) * sizeof(char));
	if (trimmed == 0)
		return (NULL);
	while (trimmed[i] != '\0')
	{
		trimmed_mal[i] = trimmed[i];
		i++;
	}
	trimmed_mal[i] = '\0';
	return (trimmed_mal);
}

/*#include <stdio.h>
int main(void)
{
	printf("ft existant %s\n",ft_strtrim("yzzhellozxz", "zy"));
	//printf("ft cree %s\n",substr("coucouc tout le monde", 5, 5));
	return (0);
}*/
