/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorales <amorales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:16:10 by amorales          #+#    #+#             */
/*   Updated: 2024/10/13 20:07:18 by amorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*new_src;
	char	*new_dst;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	new_src = (char *)src;
	new_dst = (char *)dst;
	i = 0;
	if (new_dst > new_src)
		while (len-- > 0)
			new_dst[len] = new_src[len];
	else
	{
		while (i++ < len)
			new_dst[i] = new_src[i];
	}
	return (dst);
}
