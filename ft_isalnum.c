/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:28:21 by gonische          #+#    #+#             */
/*   Updated: 2024/06/10 14:33:36 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ch)
{
	return ((ft_isalpha(ch) || ft_isdigit(ch)));
}

/*
// Testing zone 
#include <stdio.h>

void	test(int value, int expected_result)
{
	int	result;

	result = ft_isalnum(value);
	if (result == expected_result)
		printf("PASS! ft_isalpha: %d\n", result);
	else
		printf("FAILED! ft_isalpha: %d, expected: \
				%d\n", result, expected_result);
}

int	main(void)
{
	test('1', 1);
	test('9', 1);
	test('a', 1);
	test('Z', 1);
	test('.', 0);
	test('~', 0);

	return (0);
}
*/