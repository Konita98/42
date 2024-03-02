/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 08:43:39 by nerica-k          #+#    #+#             */
/*   Updated: 2024/03/02 09:33:04 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(nmemb * size);
	while (i < size)
	{
		*ptr = 0;
		ptr++;
	}
	return (ptr);
}

/*int	main(void)
{
	char* ptr = (char*) calloc(25, sizeof(float));
	if(ptr == NULL) {
    		printf("Error! memory not allocated.");
   		 exit(0);
	}
	else
	{
		printf("ft cree: %s hey", ptr);
	}
	char* ptr1 = (char*) ft_calloc(25, sizeof(float));
	if(ptr1 == NULL) {
    		printf("Error! memory not allocated.");
   		 exit(0);
	}
	else
	{
		printf("ft cree: %s hey", ptr1);
	}
	free(ptr);
	free(ptr1);
	return(0);
}*/
