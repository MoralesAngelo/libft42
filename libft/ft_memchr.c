/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorales <amorales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:08:15 by amorales          #+#    #+#             */
/*   Updated: 2024/10/13 18:58:54 by amorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cc;
	size_t			i;

	str = (unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == cc)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int main ()
 {
	const char *str = "hola 42";
	int c = 'a';
	size_t n = 5;

	void *result = ft_memchr(str, c, n);

	printf("resultado %s\n", result ? (char *)result : "no encontrado");

	return (0);
 }
*/
