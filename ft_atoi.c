/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:14:30 by gonische          #+#    #+#             */
/*   Updated: 2024/06/11 18:30:07 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	neg;

	result = 0;
	i = 0;
	neg = 1;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result * neg);
}

/*
// Tests
#include <stdlib.h> // used to check which input atoi can handle
#include <stdio.h>

void	test(char *str)
{
	int	atoi_res;
	int ft_atoi_res;

	ft_atoi_res = ft_atoi(str);
	atoi_res = atoi(str);
	if (atoi_res == ft_atoi_res)
		printf("PASS!\n");
	else
		printf("ERROR: ft_atoi_res: %d atoi_res: %d\n", ft_atoi_res, atoi_res);
}

int	main()
{
	test("123");
	test("123.asdasd");
	test("0");
	test("-0");
	test("-----10");
	test("-10");
}
*/