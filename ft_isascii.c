/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:36:29 by gonische          #+#    #+#             */
/*   Updated: 2024/06/10 14:54:42 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iscascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
// Testing zone 
#include <stdio.h>
#include <ctype.h>
#include <limits.h>

void	test(int value)
{
	int	result;
	int	expected_result;

	result = ft_iscascii(value);
	expected_result = isascii(value);
	if (result == expected_result)
		printf("PASS! ft_iscascii: %d\n", result);
	else
		printf("FAILED! ft_iscascii: %d, expected: \
				%d\n", result, expected_result);
}

int	main(void)
{
	test('1');
	test('?');
	test('\n');
	test(128);
	test(INT_MAX);
	test(INT_MIN);
	return (0);
}
*/