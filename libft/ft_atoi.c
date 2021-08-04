/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 14:42:33 by ajimenez          #+#    #+#             */
/*   Updated: 2021/08/04 12:44:16 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	r;
	int	count;

	i = 0;
	s = 1;
	r = 0;
	count = 0;
	while ( str[i] <= 13 || str[i] == ' ')
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			s = -1;
		i++;
		count++;
	}
	if (count > 1)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + (str[i] - '0');
		i++;
	}
	return (r * s);
}
