/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:16:10 by amorales          #+#    #+#             */
/*   Updated: 2024/10/16 20:00:29 by mac              ###   ########.fr       */
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
	if (new_dst > new_src)
	{
		while (len-- > 0)
			new_dst[len] = new_src[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			new_dst[i] = new_src[i];
			i++;
		}
	}
	return (dst);
}

