/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorales <amorales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:49:48 by amorales          #+#    #+#             */
/*   Updated: 2024/10/13 19:00:40 by amorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_c;

	last_c = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			last_c = (char *)s;
		}
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last_c);
}

/*
int	main(void)
{
	const char	a[] = "hola Gente";
	char		b;
	char		*result;

	b = 'G';
	result = ft_strrchr(a, b);
	printf("caracter '%c' encontrado en la posicion: %ld\n",b, result - a);
	return (0);
}
*/
