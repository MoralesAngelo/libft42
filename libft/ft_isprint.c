/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorales <amorales@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:59:20 by amorales          #+#    #+#             */
/*   Updated: 2024/10/13 18:58:06 by amorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 127);
}

/*
int	main(void)s
{
	int	c = 45;

	if (ft_isprint(c))
{
		printf("%c es un caracter printable \n", c);
	} else {
		printf("%c no es caracter printable \n", c);
	}
	return (0);
}
*/