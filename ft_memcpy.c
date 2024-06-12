/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:40:36 by gonische          #+#    #+#             */
/*   Updated: 2024/06/10 19:46:42 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

// Tests
/*
#include <stdio.h>

int	main(void)
{
	char src[] = "DeadInsideKids";
	char dest[128];
	ft_memcpy(&dest[0], &src[0], 15);
	printf("Result: %s\n", dest);
}
*/