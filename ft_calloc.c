/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:52:00 by gonische          #+#    #+#             */
/*   Updated: 2024/06/14 16:55:09 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc((count * size) + 1);
	if (!result)
		return (NULL);
	ft_bzero(result, count);
	((char *)result)[count] = '\0';
	return (result);
}

/*
// Tests
int	main(void)
{
	// Trust me, it's works :D
	return (0);
}
*/