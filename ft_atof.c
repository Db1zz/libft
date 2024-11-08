/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonische <gonische@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:11:49 by gonische          #+#    #+#             */
/*   Updated: 2024/11/08 19:09:57 by gonische         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof(const char *str)
{
	double	result;
	double	point_val;
	int		i;
	int		neg;

	neg = 0;
	i = 0;
	result = ft_atoi(str);
	if (result < 0)
		neg = -1;
	while (str[i] && str[i] != '.')
		i++;
	point_val = ft_atoi(str + i + 1);
	if (point_val < 0 || point_val == 0 && !ft_isdigit(str[i + 1]))
		return (0);
	if (!ft_isdigit(str[i + 1]))
		return (result);
	while (0 < (int)point_val)
		point_val /= 10;
	return (result + point_val * neg);
}