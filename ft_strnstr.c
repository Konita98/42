/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 09:02:42 by nerica-k          #+#    #+#             */
/*   Updated: 2024/03/02 09:30:53 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				val;
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*s1 == *s2)
		{
			val = 0;
		}
		else
		{
			val = *s1 - *s2;
			break ;
		}
		s1++;
		s2++;
		i++;
	}
	return (val);
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str != '\0')
	{
		str++;
		n++;
	}
	return (n);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	char		*str_big;
	char		*str_little;

	i = 0;
	str_big = (char *)big;
	str_little = (char *)little;
	if (str_big[i] == '\0')
	{
		if (str_little[i] == '\0')
			return (str_big);
		else
			return (NULL);
	}
	while (i < len)
	{
		if (ft_strncmp(str_big, str_little, ft_strlen(str_little)) == 0)
		{
			return (str_big);
		}
		str_big++;
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char src[] = "hella can be very useful......";
	const char dst[] = "can";
	printf("ft cree %s\n",ft_strnstr(src, dst, 10));
	printf("ft cree %d",strnstr(src, dst, 10));

	return(0);
}*/
