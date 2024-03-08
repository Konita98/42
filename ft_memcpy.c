/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:21:00 by nerica-k          #+#    #+#             */
/*   Updated: 2024/02/24 12:21:03 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *d, const void *s, int n)
{
	char	*src;
	char	*dest;

	src = (char *) s;
	dest = (char *) d;
	while (n != 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[] = "hello eeryoihlwre";
	char dst[] = "memmove can be very useful......";
	ft_memcpy(dst, src, 5);
	//memcpy(dst, src, 5);
	printf("%s", dst );
	return(0);
}*/
