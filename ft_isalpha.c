/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 08:18:54 by nerica-k          #+#    #+#             */
/*   Updated: 2024/02/24 08:19:00 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char a)
{
	int	val;

	val = 0;
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
	{
		val = 1;
	}
	return (val);
}
/*#include <stdio.h>
int main(void)
{
	char q='4';
	printf("%d", ft_isalpha(q));
	return 0;
}*/
