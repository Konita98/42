/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 09:37:48 by nerica-k          #+#    #+#             */
/*   Updated: 2024/02/25 09:37:51 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *str, int c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*str != '\0')
	{
		if (*str == c)
		{
			j = i;
		}
		i++;
		str++;
	}
	str = str - i;
	return (str + j);
}

/*#include <stdio.h>
#include <ctype.h>
#include <string.h>
int	main(void)
{
	char* str = "Hellor bicth of everyone";
	printf("extract %s\n", ft_strrchr(str, 'r'));
	printf("extract %s\n", strchr(str, 'r'));
	return(0);
}*/
