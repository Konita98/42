/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:38:52 by nerica-k          #+#    #+#             */
/*   Updated: 2024/03/02 09:08:18 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *d, const void *s, int n)
{
	char	*src;
	char	*dest;
	//char	*tmp;
	int		i;

	src = (char *) s;
	dest = (char *) d;
	i = 0;
	if (!d && !s)
		return (0);
	while (i < n && src[i] != '\0')
	{
		*dest = src[i++];
		dest++;
	}
	/*tmp[i] = '\0';
	i = 0;
	while (i < n && tmp[i] != '\0')
	{
		*dest = tmp[i];
		dest++;
		i++;
	}*/
	return (dest - i + 1);
}
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[] = "hello eeryoihlwre";
	char dst[] = "my name is erica kone";
	char src1[] = "hello eeryoihlwre";
	char dst1[] = "my name is erica kone";
	ft_memmove(dst, src, 6);
	memmove(dst1, src1, 6);
	printf("ft cree: %s \n", dst );
	printf("ft cree: %s", dst1 );
	return(0);
}