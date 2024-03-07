/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nerica-k <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:50:43 by nerica-k          #+#    #+#             */
/*   Updated: 2024/03/06 10:52:33 by nerica-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
int		ft_isalpha(char a);
int		ft_isdigit(char a);
int		ft_isalnum(char a);
int		isascii(char c);

int		ft_strlen(char *str);
void	*ft_memset(void *s, int c, int n);
void	*ft_bzero(void *s, int n);
void	*ft_memcpy(void *d, const void *s, int n);
void	*ft_memmove(void *d, const void *s, int n);
int		ft_strlcpy(char *dst, char *src, int size);
int		ft_strlcat(char *dest, char *src, unsigned int size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(char *str, int c);

char	*ft_strrchr(char *str, int c);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
void	*ft_memchr(const void	*s, int c, int n);
int		ft_memcmp(const void *s1, const void *s2, unsigned int n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif /* __LIBFT_H__ */
