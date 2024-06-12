/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 20:20:50 by gonische          #+#    #+#             */
/*   Updated: 2024/06/12 12:38:38 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	result;

	i = 0;
	result = ft_strlen(src);
	if (dstsize == 0)
		return (result);
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (result);
}

/*
// Tests
#include <stdio.h>

int	main(void)
{
	size_t	len;
	char	dst[5];

	len = ft_strlcpy(&dst[0], "Hello World!\n", 14);
	printf("%s\n", dst);
	return (0);
}
*/