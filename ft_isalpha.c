/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:40:59 by gonische          #+#    #+#             */
/*   Updated: 2024/06/10 13:53:32 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
// Testing zone 
#include <stdio.h>

void	test(int value, int expected_result)
{
	int	result;

	result = ft_isalpha(value);
	if (result == expected_result)
		printf("PASS! ft_isalpha: %d\n", result);
	else
		printf("FAILED! ft_isalpha: %d, expected: \
				%d\n", result, expected_result);
}

int	main(void)
{
	test('a', 1);
	test('z', 1);
	test('A', 1);
	test('Z', 1);
	test('1', 1);

	return (0);
}
*/