/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:47:50 by gonische          #+#    #+#             */
/*   Updated: 2024/06/14 17:03:43 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd('0' + (num % 10), fd);
}

/*
// Tests
#include <limits.h>

void	test(int n)
{
	ft_putnbr_fd(n);
	ft_putchar('\n');
}

int	main(void)
{
	test(INT_MIN);
	test(-1);
	test(-10);
	test(-11);
}
*/