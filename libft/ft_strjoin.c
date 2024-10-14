/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorales <amorales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 16:15:02 by amorales          #+#    #+#             */
/*   Updated: 2024/10/13 18:59:57 by amorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new_cpy;

	if (!s1 || !s2)
		return (NULL);
	new_cpy = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new_cpy)
		return (NULL);
	ft_strlcpy(new_cpy, s1, ft_strlen(s1) + 1);
	ft_strlcat(new_cpy, s2, ft_strlen(s2) + ft_strlen(s1) + 1);
	return (new_cpy);
}

/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*result;

	s1 = "Hola ";
	s2 = "mundo!";
	result = ft_strjoin(s1, s2);
	if (result)
		printf("Cadena unida: %s\n", result);
	else
		printf("Error en la concatenación\n");
	return (0);
}
*/
