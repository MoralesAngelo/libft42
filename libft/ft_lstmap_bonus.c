/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:14:15 by amorales          #+#    #+#             */
/*   Updated: 2024/10/16 20:53:05 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*list;
	t_list	*node;
	void		*content;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	temp = lst;
	while (temp)
	{
		content = f(temp->content);
		node = ft_lstnew(content);
		if (!node)
		{
			free(content);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		temp = temp->next;
	}
	return (list);
}
