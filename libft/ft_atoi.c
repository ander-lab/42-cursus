/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 23:59:33 by Alejandro         #+#    #+#             */
/*   Updated: 2021/07/24 00:09:05 by Alejandro        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	r;

	i = 0; 
	s = 1;
	r = 0;
	while (str[i] <= 32)
		++i;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			s = -1;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r *10) + (str[i] - '0');
		++i;
	}
	return (r * s);
}
