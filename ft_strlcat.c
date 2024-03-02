/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:52:00 by nerica-k          #+#    #+#             */
/*   Updated: 2024/02/24 15:52:03 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	if (*dest == '\0')
	{
		while (*src != '\0' && j < size)
		{
			src++;
			i += j;
			j++;
		}
	}
	return (i);
}
