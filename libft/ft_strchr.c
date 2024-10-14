/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorales <amorales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:14:40 by amorales          #+#    #+#             */
/*   Updated: 2024/10/13 18:59:44 by amorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

/*
int	main(void)
{
	const char	a[] = "hola Gente";
	char		b;
	char		*result;

	b = 'G';
	result = ft_strchr(a, b);
	printf("caracter '%c' encontrado en la posicion: %ld\n",b, result - a);
	return (0);
}
*/