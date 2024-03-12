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
//#include <stdio.h>

static int	countword(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	if(c == 0)
		return (1);
	while (s[i] == c && c != 0)
		i++;
	while (s[i] != '\0' )
	{
		if (s[i] != c && s[i + 1] == c)
			count++;
		i++;
	}
	return (count);
}

static char	*f_word(char const *s, char c)
{
	char	*word;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (c == 0)
		return((char *)s);
	while (s[i] != '\0' && s[i] != c && c != 0)
		i++;
	if (i != 0)
	{
		word = (char *)malloc((i + 1) * sizeof(char));
		while (j < i + 1)
		{
			word[j] = s[j];
			j++;
		}
		word[j] = '\0';
		return (word);
	}
	return (NULL);	
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		count;
	int		j;

	i = 0;
	count = countword(s, c);
	tab = (char **)malloc((count + 1) * sizeof(char *));
	if (tab == 0 || s == 0)
		return (NULL);
	while (*s != '\0' && i <= count)
	{
		if (f_word(s, c))
		{
			tab[i] = (char *)malloc((ft_strlen(f_word(s, c))) * sizeof(char));
			j = 0;
			while ((j < ft_strlen(f_word(s, c) + 1)))
			{
				tab[i][j] = f_word(s, c)[j];
				j++;
			}
			tab[i][j] = '\0';
			s += ft_strlen(f_word(s, c)) + 1;
			free(f_word(s, c));
			i++;
		}
		else
			s++;
	}
	tab[count] = '\0';
	return (tab);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
	//char *tab = ft_split("tripouille", 0);
	//printf("%d\n",strcmp(ft_split("tripouille", 0)[0], "tripouille"));
	printf("%d\n",countword("tripouille", 0));
	//printf("%ld\n",strlen(tab[0]));
	printf("--%s\n",ft_split("tripouille", 0)[0]);
	/*while (i <= countword("tripouille", 0))
	{
		printf("%s\n",ft_split("tripouille", 0)[i]);
		i++;
	}
	//free(*tab);
	return (0);
}*/
