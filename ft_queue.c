/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:03:13 by gonische          #+#    #+#             */
/*   Updated: 2024/10/20 12:25:20 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
	NOTE: This code is not part of 42 curriculum.
*/

void	*ft_dequeue(t_list **queue)
{
	void	*data;
	t_list	*to_dequeue;
	t_list	*temp;

	if (!queue || !*queue)
		return (NULL);
	to_dequeue = *queue;
	temp = to_dequeue->next;
	(*queue) = temp;
	data = to_dequeue->content;
	free(to_dequeue);
	return (data);
}

void	ft_enqueue(t_list **queue, void	*data)
{
	t_list	*last;

	if (!queue || !data)
		return ;
	last = ft_lstlast(*queue);
	if (!last)
	{
		*queue = ft_lstnew(data);
		return ;
	}
	last->next = ft_lstnew(data);
}
