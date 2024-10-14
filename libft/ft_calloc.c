/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorales <amorales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:05:53 by amorales          #+#    #+#             */
/*   Updated: 2024/10/13 18:57:53 by amorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sizes_memori;
	void	*ptr;

	sizes_memori = nmemb * size;
	ptr = malloc(sizes_memori);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, sizes_memori);
	return (ptr);
}

/*
int	main(void)
{
	int		*arr;
	size_t	n;
	size_t	i;

	i = 0;
	n = 5;
	arr = (int *)ft_calloc(n, sizeof(int));
	while(1 < n)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
	}
	return (0);
}
*/
