/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 14:16:29 by nerica-k          #+#    #+#             */
/*   Updated: 2024/03/03 14:17:05 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countexdel(char const *s, char c)
{
	int	count;

	count = 1;
	while (*s != '\0' )
	{
		if (*s == c)
		{
			count++;
		}
		s++;
	}
	return (count);
}

static char	*extract(char const *s, char c)
{
	char	*word;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	word = (char *)malloc((i + 1) * sizeof(char));
	while (j < i)
	{
		word[j] = s[j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		count;
	int		j;

	i = 0;
	count = countexdel(s, c);
	tab = (char **)malloc(count * sizeof(char *));
	if (tab == 0 || c == 0 || s == 0)
		return (NULL);
	while (*s != '\0' && i <= count)
	{
		tab[i] = (char *)malloc((ft_strlen(extract(s, c)) + 1) * sizeof(char));
		j = 0;
		while ((j <= ft_strlen(extract(s, c))))
		{
			tab[i][j] = extract(s, c)[j];
			j++;
		}
		free(extract(s, c));
		s += ft_strlen(extract(s, c)) + 1;
		i++;
	}
	return (tab);
}

/*#include <stdio.h>
int main(void)
{
	int i;
	i =0;
	char	*phrase;
	phrase = "je meuigf woh wfeoih wpfh fwei";
	int j=countexdel(phrase,' ');
	while(i != j)
	{
		printf("ft existant %s\n",ft_split(phrase, ' ')[i]);
		i++;
	}
	return (0);
}*/
