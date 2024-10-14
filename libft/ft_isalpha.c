/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorales <amorales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:17:46 by amorales          #+#    #+#             */
/*   Updated: 2024/10/13 18:57:46 by amorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

/*
int	main(void)
{
	int	c;

	c = 'A';
	if (ft_isalpha(c))
	{
		printf("%c es una letra. \n", c);
	} else {
		printf("%c no es una letra. \n", c);
	}
	return (0);
}
*/