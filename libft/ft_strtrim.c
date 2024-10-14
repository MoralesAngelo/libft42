/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorales <amorales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:17:15 by amorales          #+#    #+#             */
/*   Updated: 2024/10/13 20:50:59 by amorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	init;
	size_t	end;
	char	*new_str;
	size_t	total_new_len;

	if (!s1 || !set)
		return (NULL);
	init = 0;
	while (s1[init] && ft_in_set(s1[init], set))
	{
		init++;
	}
	end = ft_strlen(s1);
	while (end > init && ft_in_set(s1[end - 1], set))
	{
		end--;
	}
	total_new_len = end - init;
	new_str = (char *)malloc(sizeof(char) * (total_new_len + 1));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, &s1[init], total_new_len + 1);
	return (new_str);
}

/*
int	main(void)
{
	char	*s1;
	char	*set;
	char	*result;

	s1 = "   -**-*Hola Mundo*-**   ";
	set = " *-";
	result = ft_strtrim(s1, set);
	if (result)
		printf("Cadena recortada: '%s'\n", result);
	else
		printf("Error al recortar la cadena\n");
	return (0);
}
*/
