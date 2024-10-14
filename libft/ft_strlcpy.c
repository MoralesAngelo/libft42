/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorales <amorales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:27:35 by amorales          #+#    #+#             */
/*   Updated: 2024/10/13 19:00:14 by amorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (src == NULL)
		return (0);
	i = 0;
	if (size)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

/*
int	main(void)
{
	char			dest[50];
	char			src[] = "q mas q = en el corazon siempre q";
	unsigned int	copied_length;

	copied_length = ft_strlcpy(dest, src, 10);
	printf("dest : %s\n", dest);
	printf("longitud copiada: %u\n", copied_length);
	return (0);
}
*/
