#ifndef	LIBFT_H 
# define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
**General
*/
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n)
void	*ft_memcpy(void *dst, const void *src, size_t n);
#endif
