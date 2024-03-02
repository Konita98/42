/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 11:37:24 by nerica-k          #+#    #+#             */
/*   Updated: 2024/02/24 11:37:31 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, int n)
{
	char	*str;

	str = (char *) s;
	while (n != 0 && *str != '\0')
	{
		*str = (char)c;
		n--;
		str++;
	}
	return (s);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "hello eeryoihlwre";

	memset(str, 'p', 5);
	printf("%s", str);
	return(0);
}*/
