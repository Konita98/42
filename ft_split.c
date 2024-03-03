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

#include <stdlib.h>

int	countexdel(char const *s, char c)
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

static char	*extract_word(char const *s, char c)
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
	char	*word;
	int		i;
	int		count;
	int		j;

	i = 0;
	count = countexdel(s, c);
	tab = (char **)malloc(count * sizeof(char *));
	if (tab == 0)
		return (NULL);
	while (*s != '\0' && i <= count)
	{
		word = extract_word(s, c);
		tab[i] = (char *)malloc((ft_strlen(word) + 1) * sizeof(char));
		j = 0;
		while ((j <= ft_strlen(word)))
		{
			tab[i][j] = word[j];
			j++;
		}
		free(extract_word(s, c));
		s += ft_strlen(word) + 1;
		i++;
	}
	return (tab);
}

#include <stdio.h>
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
	//printf("ft cree %s\n",substr("coucouc tout le monde", 5, 5));
	return (0);
}
