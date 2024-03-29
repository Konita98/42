/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 08:50:23 by nerica-k          #+#    #+#             */
/*   Updated: 2024/03/02 08:50:26 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char a)
{
	int	val;

	val = 0;
	if ((a >= 48 && a <= 57) || ((a >= 65 && a <= 90) || (a >= 97 && a <= 122)))
	{
		val = 1;
	}
	return (val);
}

/*#include <stdio.h>
int main(void)
{
	char q=';';
	printf("%d", ft_isalnum(q));
	return 0;
}*/
