/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 14:02:17 by gonische          #+#    #+#             */
/*   Updated: 2024/06/17 14:44:29 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	result = ft_lstnew((*f)(lst->content));
	head = result;
	while (lst)
	{
		if (!head || !result)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		else
		{
			head->next = ft_lstnew((*f)(lst->content));
			head = head->next;
			lst = lst->next;
		}
	}
	return (result);
}

// Tests
/*
#include <stdio.h>

int	main(void)
{

	return (0);
}
*/