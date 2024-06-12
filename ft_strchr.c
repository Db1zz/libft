/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:30:56 by gonische          #+#    #+#             */
/*   Updated: 2024/06/11 16:42:46 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	char	*result;

	result = (char *)s;
	while ((*result) != '\0')
	{
		if ((*result) == (char)c)
			return (result);
		result++;
	}
	return (NULL);
}

/*
// Tests
#include <stdio.h>

void	test(char *str, int c)
{
	char	*res;

	res = ft_strchr(str, c);
	if (res)
		printf("RES == %c\n", *res);
	else
		printf("RES == NULL\n");
}

int	main(void)
{
	test("lol", 'o');
	test("lol", 'i');

	return (0);
}
*/