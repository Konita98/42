/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 09:42:37 by nerica-k          #+#    #+#             */
/*   Updated: 2024/02/25 09:42:40 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				val;
	unsigned int	i;

	i = 0;
	val = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0' ))
	{
		if (s1[i] != s2[i])
		{
			val = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (val);
}
