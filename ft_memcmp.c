/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:26:02 by gonische          #+#    #+#             */
/*   Updated: 2024/06/17 14:34:32 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (n <= 0)
		return (0);
	i = 0;
	while (i < n && (p1[i] && p2[i]) && (p1[i] == p2[i]))
		i++;
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