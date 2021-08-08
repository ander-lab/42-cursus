/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:47:50 by ajimenez          #+#    #+#             */
/*   Updated: 2021/08/08 20:36:30 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	aux_s;
	size_t	aux_substr;

	if (!s)
		return (0);
	if (ft_strlen(s) < len)
		substr = (char *)malloc(ft_strlen(s) + 1);
	else
		substr = (char *)malloc(len + 1);
	if (!substr)
		return (0);
	aux_s = start;
	aux_substr = 0;
	while (aux_substr < ft_strlen(s) && aux_substr < len
		&& aux_s < ft_strlen(s))
	{
		substr[aux_substr] = s[aux_s];
		aux_substr++;
		aux_s++;
	}
	substr[aux_substr] = '\0';
	return (substr);
}
