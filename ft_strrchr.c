/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:51:24 by gonische          #+#    #+#             */
/*   Updated: 2024/06/11 16:53:11 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;

	i = 0;
	result = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			result = (char *)(&s[i]);
		i++;
	}
	return (result);
}

/*
// Tests
#include <stdio.h>

void	test(char *str, int c)
{
	char	*res;

	res = ft_strrchr(str, c);
	if (res)
		printf("RES == %c\n", *res);
	else
		printf("RES == NULL\n");

}
int	main(void)
{
	test("lolo", 'o');
	test("lol", 'i');

	return (0);
}
*/