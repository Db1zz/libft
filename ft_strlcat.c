/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:33:20 by gonische          #+#    #+#             */
/*   Updated: 2024/06/12 11:58:23 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen == dstsize)
		return (dstlen + srclen);
	while ((dstlen + i) < (dstsize - 1) && src[i])
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

/*
// Tests
#include <stdio.h>
int	main(void)
{
	char	*src = " World!";
	size_t	dest_len = 15;
	char	dest[15] = "Hello";
	size_t result = ft_strlcat(&dest[0], src, dest_len);
	printf("Result: %d\n\
			Created string: %s\n", (int)result, dest);
	return (0);
}
*/