/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:45:58 by nerica-k          #+#    #+#             */
/*   Updated: 2024/02/24 15:46:02 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy(char *dst, char *src, int size)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i <= size - 1)
	{
		dst[i] = src[i];
		i++;
		count++;
	}
	dst[i] = '\0';
	return (count);
}

/*#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char src[] = "hello eeryoihlwre";
	char dst[] = "my name is erica kone";
	printf("ft cree: %d \n", ft_strlcpy(dst, src, strlen(src)));
	return(0);
}*/
