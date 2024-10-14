/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorales <amorales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:38:27 by amorales          #+#    #+#             */
/*   Updated: 2024/10/13 18:57:43 by amorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
int	main(void)
{
	int	c = ;

	if (ft_isascii(c))
{
		printf("%c es un caracter printable \n", c);
	} else {
		printf("%c no es caracter printable \n", c);
	}
	return (0);
}
*/
