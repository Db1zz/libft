/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:04:35 by gonische          #+#    #+#             */
/*   Updated: 2024/06/14 17:01:14 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	result = (char *)malloc(len + 1);
	if (!result || len == 0)
		return (NULL);
	ft_memcpy(result, s + start, len);
	result[len] = '\0';
	return (result);
}

// Tests
/*
#include <stdio.h>

void	test(char const *string, unsigned int start, 
			 size_t len, char const *expected)
{
	char	*result = ft_substr(string, start, len);
	int		cmp_res = ft_memcmp(expected, result, len);
	if(!cmp_res)
		printf("PASS! %s\n", result);
	else
		printf("FAILED: Got %s, Expected %s | CMP_RES: %d\n", 
				result, expected, cmp_res);
	free(result);
}

int	main(void)
{
	test("Hello World!", 6, 6, "World!");
}
*/