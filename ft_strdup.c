/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:03:27 by nerica-k          #+#    #+#             */
/*   Updated: 2024/03/02 09:44:34 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
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

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*ptr;
	int		i;

	str = (char *)s;
	i = 0;
	ptr = malloc((ft_strlen(str)) * sizeof(char));
	while (*str != '\0')
	{
		*ptr = *str;
		ptr++;
		str++;
		i++;
	}
	return (ptr - i);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	//char src[] = "hello eeryoihlwre";
	char* p1 = ft_strdup("bonnie and clyde");
	char* p2 = strdup("bonnie and clyde");
	printf("ft cree: %s \n", p1);
	printf("ft cree: %s \n", p2);
	free(p1);
	free(p2);
	return(0);
}*/
