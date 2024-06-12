/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:26:02 by gonische          #+#    #+#             */
/*   Updated: 2024/06/12 12:38:04 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (n <= 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			break ;
		i++;
	}
	return (((char *)s1)[i] - ((char *)s2)[i]);
}

// Test
/*
#include <string.h>
#include <stdio.h>

void	test(const void *s1, const void *s2, size_t n)
{
	int	ft_memcmp_res;
	int memcmp_res;

	ft_memcmp_res = ft_memcmp(s1, s2, n);
	memcmp_res = memcmp(s1, s2, n);
	if (ft_memcmp_res == memcmp_res)
		printf("PASS!\n");
	else
		printf("FAILED: ft_memcmp %d != strncmp %d\n", \
				ft_memcmp_res, memcmp_res);
}

int	main(void)
{
	test("aboba", "aboba", 3);
	test("aboba", "abobac", 3);
	test("aboba", "abobac", 6);
	test("aboba", "abobac", 0);
	test("", "abobac", 0);
	test("abobac", "", 0);
	test("", "abobac", 10);
	test("abobac", "", 10);
}
*/