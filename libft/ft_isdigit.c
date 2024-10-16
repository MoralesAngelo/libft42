/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:23:58 by amorales          #+#    #+#             */
/*   Updated: 2024/10/16 19:54:02 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}

/*
int	main(void)
{
	int	c;

	c = 43;
	if (ft_isdigit(c))
	{
		printf("%c es un numero del 0 al 9. \n", c);
	} else {
		printf("%c no es un numero del 0 al 9 \n", c);
	}
	return (0);
}
*/
