/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:47:50 by ajimenez          #+#    #+#             */
/*   Updated: 2021/08/03 16:54:14 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	aux_s;
	size_t	aux_substr;

	substr = (char *)malloc(len + 1);
	if (!s || !substr)
		return (0);
	aux_s = start;
	aux_substr = 0;
	while (aux_substr < ft_strlen(s) && aux_substr < len)
	{
		substr[aux_substr] = s[aux_s];
		aux_substr++;
		aux_s++;
	}
	substr[aux_substr] = '\0';
	return (substr);
}
