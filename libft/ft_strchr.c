/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:14:40 by amorales          #+#    #+#             */
/*   Updated: 2024/10/16 20:24:18 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char uc = (unsigned char)c;

	while (*s)
	{
		if (*s == uc)
			return ((char *)s);
		s++;
	}

	if (uc == '\0')
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
