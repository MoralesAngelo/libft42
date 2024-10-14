/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorales <amorales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:35:52 by amorales          #+#    #+#             */
/*   Updated: 2024/10/13 20:01:15 by amorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*destine;
	const unsigned char	*origin;
	size_t				i;

	if (!dest && !src)
		return (0);
	destine = (unsigned char *)dest;
	origin = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		destine[i] = origin[i];
		i++;
	}
	return (destine);
}
