/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:37:40 by amorales          #+#    #+#             */
/*   Updated: 2024/10/16 19:54:37 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (c);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = 23;
	if (ft_isalnum(c))
{
		printf("%c es un numero del 0 al 9 o letras  \n", c);
	} else {
		printf("%c no es un numero del 0 al 9 ni letras \n", c);
	}
	return (0);
}
*/
