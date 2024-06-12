/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:28:11 by gonische          #+#    #+#             */
/*   Updated: 2024/06/12 11:16:21 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
// Testin Zone
#include <stdio.h>

int	main(void)
{
	printf("Test 1: %d\n", ft_strlen("Hello World!\n"));
	printf("Test 2: %d\n", ft_strlen("\n"));
	printf("Test 3: %d\n", ft_strlen(""));
	return (0);
}
*/