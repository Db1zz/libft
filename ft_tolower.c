/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:28:58 by gonische          #+#    #+#             */
/*   Updated: 2024/06/11 12:30:51 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*
// Tests
#include <stdio.h>

int	main(void)
{
	printf("%c \n", ft_tolower('a'));
	printf("%c \n", ft_tolower('A'));
}
*/