/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alejandro <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 23:45:28 by Alejandro         #+#    #+#             */
/*   Updated: 2021/08/08 16:37:22 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	count;
	int	trigger;

	if (!str && !c)
		return (0);
	count = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (count);
}

static char	*str_dup(const char *str, int start, int finish)
{
	char	*str2;
	int		i;

	i = 0;
	str2 = malloc((finish - start) * sizeof(char));
	if (!str2)
		return (0);
	while (start < finish)
		str2[i++] = str[start++];
	str2[i] = '\0';
	return (str2);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s || !c)
		return (0);
	split = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!split)
		return (0);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = str_dup(s, index, i);
			index = -1;
		}
	}
	return (split);
}
