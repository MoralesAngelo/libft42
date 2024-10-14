/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorales <amorales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:55:27 by amorales          #+#    #+#             */
/*   Updated: 2024/10/13 18:59:49 by amorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s);
	ptr = (char *)malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s, len + 1);
	return (ptr);
}

/*
int	main(void)
{
	char	text[] = "esto se copiara!";
	char	*duplicado;

	duplicado = ft_strdup(text);
	if(duplicado != NULL)
		printf(" texto duplicado: %s\n", duplicado);
	else
		printf("no se duplico. \n");
	return (0);
}
*/
