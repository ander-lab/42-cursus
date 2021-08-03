/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 14:46:45 by ajimenez          #+#    #+#             */
/*   Updated: 2021/08/03 19:06:51 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT_H 
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/*
**General
*/
//IS
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_isalnum(int c);

//mem
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

//str
size_t			 ft_strlen(const char *s);
size_t			 ft_strlcpy (char *dst, const char *src, size_t dstsize);
unsigned int	 ft_strlcat(char *dst, const char *src, size_t dstsize);
char			 *ft_strchr(const char *s, int c);
char			 *ft_strrchr(const char *s, int c);
int				 ft_strncmp(const char *s1, const char *s2, size_t n);
char			 *ft_strnstr(const char *haystack, const char *needle, size_t len);
void			 *ft_calloc (size_t num, size_t size);
char			 *ft_strdup(const char *s1);

//to
int	ft_atoi(const char *str);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif //LIBFT_H
