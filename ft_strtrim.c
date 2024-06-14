/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 17:08:17 by gonische          #+#    #+#             */
/*   Updated: 2024/06/14 11:53:15 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	to_trim(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	get_trimmed_size(char const *src, char const *set)
{
	size_t	i;
	size_t	result;

	i = 0;
	result = 0;
	while (src[i])
	{
		if (!to_trim(src[i], set))
			result++;
		i++;
	}
	return (result);
}

static void	trim(char *dest, char const *src, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		if (!to_trim(src[i], set))
			dest[j++] = src[i];
		i++;
	}
	dest[j] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;

	result = (char *)malloc(get_trimmed_size(s1, set) + 1);
	if (!result)
		return (NULL);
	trim(result, s1, set);
	return (result);
}

// Tests
/*
#include <stdio.h>

void	test(char const *s1, char const *set, char const *expected)
{
	char	*result;

	result = ft_strtrim(s1, set);
	if (!ft_strncmp(result, expected, ft_strlen(expected)))
		printf("PASS!\n");
	else
		printf("FAILED: Got '%s', Expected '%s'\n", result, expected);
	free(result);
}

int	main(void)
{
	test("aaaaaBobsa", "a", "Bobs");
	test("111111001010101", "10", "");
	test("Suka Blyat", "Suka", " Blyt");
	return (0);
}
*/