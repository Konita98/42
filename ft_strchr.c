/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:32:34 by nerica-k          #+#    #+#             */
/*   Updated: 2024/02/24 17:32:38 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == c)
		{
			return (str);
		}
		str++;
	}
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>
#include <string.h>
int	main(void)
{
	char* str = "Hello bicth";
	printf("extract %s\n", ft_strchr(str, 'i'));
	printf("extract %s\n", strchr(str, 'i'));
	return(0);
}*/
