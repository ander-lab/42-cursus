/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:03:07 by ajimenez          #+#    #+#             */
/*   Updated: 2021/07/28 19:39:30 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	if (!dst && !src)
		return(0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

int main () {
   const char src[50] = "123456789";
   char dest[50];
   strcpy(dest,"abcde");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, 1);
   printf("After memcpy dest = %s\n", dest);

   return(0);
}
