/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:58:20 by gonische          #+#    #+#             */
/*   Updated: 2024/06/11 15:05:48 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
		i++;
	return (s1[i] - s2[i]);
}

/*
// Tests
#include <string.h>
#include <stdio.h>

void	test(char *str1, char *str2, size_t n)
{
	int	ft_strncmp_res;
	int strncmp_res;

	ft_strncmp_res = ft_strncmp(str1, str2, n);
	strncmp_res = strncmp(str1, str2, n);
	if (ft_strncmp_res == strncmp_res)
		printf("PASS!\n");
	else
		printf("FAILED: ft_strncmp %d != strncmp %d\n", \
				ft_strncmp_res, strncmp_res);
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