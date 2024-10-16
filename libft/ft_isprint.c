/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:59:20 by amorales          #+#    #+#             */
/*   Updated: 2024/10/16 15:29:16 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	else
		return (0);
}

/*
int	main(void)
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
